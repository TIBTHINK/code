import os
from time import sleep
import platform
import sys


logo = ("""

           /$$
          |__/
  /$$$$$$  /$$  /$$$$$$  /$$   /$$ /$$   /$$
 /$$__  $$| $$ /$$__  $$|  $$ /$$/| $$  | $$
| $$  \ $$| $$| $$  \ $$ \  $$$$/ | $$  | $$
| $$  | $$| $$| $$  | $$  >$$  $$ | $$  | $$
| $$$$$$$/| $$|  $$$$$$/ /$$/\  $$|  $$$$$$$
| $$____/ |__/ \______/ |__/  \__/ \____  $$
| $$                               /$$  | $$
| $$                              |  $$$$$$/
|__/                               \______/
--------------------------------------------
""")

logo2 = ("""

           /$$
          |__/
  /$$$$$$  /$$  /$$$$$$  /$$   /$$ /$$   /$$
 /$$__  $$| $$ /$$__  $$|  $$ /$$/| $$  | $$
| $$  \ $$| $$| $$  \ $$ \  $$$$/ | $$  | $$
| $$  | $$| $$| $$  | $$  >$$  $$ | $$  | $$
| $$$$$$$/| $$|  $$$$$$/ /$$/\  $$|  $$$$$$$
| $$____/ |__/ \______/ |__/  \__/ \____  $$
| $$                               /$$  | $$
| $$                              |  $$$$$$/
|__/                               \______/
--------------------------------------------
""")


if os.geteuid() != 0:
    exit("You need to have root privileges to run this script.\nPlease try again, Run 'sudo !!' and run the script.\nExiting.")
os.system("clear")
print(logo)
print()


ans=True
while ans:
    print()
    print ("""
    1.Update the PI
    2.Check for updates
    3.Proxy
    4.Exit
    """)
    ans=input("What would you like to do? ")
    if ans=="1":
      os.system("apt-get update && apt-get upgrade -y")
      print(logo2)
    elif ans=="2":
      print("\n in the workings come back later")
      sleep(2)
      os.system("clear")
      print(logo2)
    elif ans=="3":
      print("\n In the workings come back later")
      sleep(2)
      os.system("clear")
      print(logo2)
    elif ans=="4":
      print("\n Exiting, Thanks for the visit")
      sleep(2)
      os.system("clear")
      sys.exit()
    elif ans !="":
      print("\n Not Valid Choice Try again")
      sleep(2)
      os.system("clear")
      print(logo2)
