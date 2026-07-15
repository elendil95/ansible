# Ansible

An ansible playbook that sets up my Arch Linux rice, meant to be run right after a base Arch install.
You can either install Arch by hand using the wiki, or use the Archinstall script: both methods should be supported.

The rice itself is based off suckless' dwm window manager, all relevant rice cobfigurations/forks of suckless software are from my other repos.

An XFCE 4 desktop is also installed, mostly as a fall-back in case dwm does not work for whatever reason 

This ansible playbook assumes the presence of the following software (at least right now):

- An appropriate graphics driver for your system.
    See [here](/doc/linux_video_driver_checklist.md) in case you forgor 💀
- git
- ansible

## How to run:

Once in a new arch install, log in as a normal user.
This user should be your main one, that you intend to set up the rice for.
Then:

1) Clone this repo on the machine to be set-up.

2) Run `ansible-galaxy collection install -r requirements.yml` to install the ansible plugin for AUR

3) Run `ansible-playbook -K playbook-main.yml`, you will be prompted for your sudo password.

4) Run `ansible-playbook -K playbook-cleanup.yml` after you are done. You will be prompted for your sudo password.

After rebooting and logging into dwm, set resolution using `xrandr` or `arandr` if necessary.

Refer to `dwm(1)` for a list of keyboard shortcuts, and of what they do.

**Some extra playbooks have been added**
- playbook-latex.yml: Installs some latex packages that can be useful. No latex editor is provided, just use vim and zathura (for live pdf previews)
- playbook-extra-packages.yml: Installs a bunch of more GUI software like libreoffice etc, to bring the system more in line with that a noob-friendly distro has out of the box
- playbook-gaming.yml: Installs all the gazzilion dependencies and 32bit libraries needed for gaming (especially for non-steam games), and a selection of FOSS games.
  It will also install the correct graphics libraries for you, if you uncomment the right task in the playbook. 

## MOLECULE TESTING
A molecule testing harness has been added, to simplify maintenance of the playbook going forward.
Molecule will run the playbook against the official arch linux docker image.
It tests most things, except: 
- Some tasks involving pywal that explicitly require $DISPLAY
- The `setup services` role, because docker has no systemd

### How to use:
1) ensure docker is installed and started (on arch, just install `docker` package)
2) create a venv: `python -n venv .venv` and `source .venv/bin/activate`
3) Install molecule `pip install molecule "molecule-plugins[docker]"`
4) Run with `molecule test` or ` export PY_COLORS=0 && molecule test 2>&1 | tee molecule.log` (to capture output, we disable color so ANSI escape sequences don't pollute the log)

To run molecule against the extra playbooks, run: `molecule test -s extra-packages` or `molecule test -s gaming`

In all cases, if you want to keep the container alive afterwards (so you can connect to it for extra testing) you can replace `molecule test` with `molecule converge`