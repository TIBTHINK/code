
import os
import time
from random import *

x = randint(1, 4999)

AiNum = (x)

#see if you are sudo
if os.geteuid() != 0:
    exit("You need to have root privileges to run this script.\nPlease try again, this time using 'sudo !!' then run the script.\nExiting.")

#survery/introduction
print("hello what is your name")
name = input('Enter your name: ')
print("hello there " + name)
print()
print("And how old are you")
age = input('How old are you: ')
print()
print("so your name is " + name)
print()
print("and your " + age)
print("well my name is  SCP-",AiNum)

# auto update part
time.sleep(5)
os.system("clear")
os.system("sudo apt-get update && sudo apt-get -y upgrade")
print("say y or n")
input("Y/N: ")

# restarting portatin
print("well in about 1 minute the program will restart")
import time
def countdown(p,q):
    i=p
    j=q
    k=0
    while True:
        if(j==-1):
            j=59
            i -=1
        if(j > 9):
            print(str(k)+str(i)+":"+str(j), end="\r")
        else:
            print(str(k)+str(i)+":"+str(k)+str(j), end="\r")
        time.sleep(1)
        j -= 1
        if(i==0 and j==-1):
            break
    if(i==0 and j==-1):
        print("Goodbye!", end="\r")
        time.sleep(1)
countdown(1,0)
os.system("python3 usless.py")
