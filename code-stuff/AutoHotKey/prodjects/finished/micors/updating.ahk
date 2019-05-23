#SingleInstance force
^F2::
Send, apt-get update && apt full-upgrade -y && apt-get autoremove -y && pip install update youtube-dl
SendInput, {ENTER}
Sleep, 100
