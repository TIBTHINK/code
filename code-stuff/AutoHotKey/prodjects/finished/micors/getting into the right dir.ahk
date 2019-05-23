#SingleInstance force
^F1::
Send, cd /var/www/html
SendInput {Enter}
send, ls
SendInput {Enter}