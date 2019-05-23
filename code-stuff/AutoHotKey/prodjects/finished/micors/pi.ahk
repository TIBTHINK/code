#SingleInstance force
^F9::
sleep 200
send cd discord-bot
Send, {enter}
sleep 500
send nohup node index.js &
SendInput, {enter}
sleep 2000
SendInput {enter}