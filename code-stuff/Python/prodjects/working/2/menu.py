import os
import time


if os.geteuid() != 0:
    exit("You need to have root privileges to run this script.\nPlease try again, this time using 'sudo' then run the script.\nExiting.")
    
ans=True
while ans:
    print ("""
    1.Update the PI
    2.Not used yet
    3.Not used yet
    4.Not used yet
    """)
    ans=raw_input("What would you like to do? ")
    if ans=="1":
      os.system("apt-get update && apt-get upgrade -y")
    elif ans=="2":
      print("\n Student Deleted")
    elif ans=="3":
      print("\n Student Record Found")
    elif ans=="4":
      print("\n Goodbye")
    elif ans !="":
      print("\n Not Valid Choice Try again")
