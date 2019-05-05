#SingleInstance force
^F4::
Send, youtube-dl -i --extract-audio --audio-format mp3 -o './%(title)s.%(ext)s' --add-metadata --embed-thumbnail --metadata-from-title '"%(artist)s - %(title)s"'
Sleep, 500
SendInput, {SPACE} 
Send, {RButton}
sleep 500
sendinput {enter}
