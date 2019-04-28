import os
import random
import time


logo = ("""







""")


if os.geteuid() != 0:
    exit("You need to have root privileges to run this script.\nPlease try again, Run 'sudo !!' and run the script.\nExiting.")
os.system("clear")
