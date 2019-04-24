import os
import time
import random
from time import sleep
import sys


if os.geteuid() != 0:
    exit("You need to have root privileges to run this script.\nPlease try again, this time using 'sudo' then run the script.\nExiting.")

print("Fantastic, lets get started")
time.sleep(3)
os.system("clear")
print("updating apt packages")
time.sleep(2)
os.system("apt-get update")
time.sleep(2)
os.system("clear")
print("now upgrading any packages")
time.sleep(2)
os.system("apt-get full-upgrade -y")

print()




lines = ["it is done"]

for line in lines:
    for c in line:
        print(c, end='')
        sys.stdout.flush()
        sleep(0.1)
    print('')

time.sleep(4)
os.system("clear")
