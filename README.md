# Ansible

An ansible playbook that sets up my Arch Linux rice, meant to be run right after a base arch install.
The rice itself is based off suckless' dwm window manager, all relevant rice cobfigurations/forks of suckless software are from my other repos.

This ansible playbook assumes the presence of the following softare (at least right now):

- An appropriate graphics driver for your system.
    See [here](/doc/linux_video_driver_checklist.md) in case you forgor 💀
- git
- ansible

## How to run:

Once in a new arch install, log in as a normal user.
This user should be your main one, that you intend to set up the rice for.
Then:

1) Clone this repo.

2) Run `ansible-galaxy collection install -r requirements.yml` to install the ansible plugin for AUR

3) Run `ansible-playbook -K playbook-main.yml`, you will be prompted for a sudo password.

Alternatively, you can use ansible pull with the following: `ansible-pull -U <repo> -C <branch> -K`,
but it has some kinks to work out still.
