#SingleInstance force
^F4::
Send, youtube-dl -i --extract-audio --audio-format mp3
Sleep, 500
SendInput, {SPACE}
Send, {RButton}
sleep 500
sendinput {enter}
