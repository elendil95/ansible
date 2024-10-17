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

After rebooting and logging into dwm, set resolution using `xrandr` or `arandr` if necessary.

Refer to `dwm(1)` for a list of keyboard shortcuts, and of what they do.