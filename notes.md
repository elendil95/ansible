== On a new install:

- After archinstall, reboot. Log in as non root user
- install gvim over vim (FIX)
- run `ansible-pull -U <repo> -C <branch> -K` and input become_pass
- playbook will fail, because before even doing anything it will check for syntax error, it exists saying AUR module is missing (even tho it will be installed) (FIX)

this could be fixed by installing the module from ansible galaxy beforehand w `ansible-galaxy collection install -r requirements.yml`

you can clone repo and run playbook loocally with `ansible-playbook -K local.yml`


after everything works, remember to add an extra role to remove the aur_builder user, as well as its config file in sudousers.d
