AiName = "SCP-4032"
import os
import time
import random

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
print("well my name is  " + AiName)

# auto update part
time.sleep(5)
os.system("clear")
os.system("sudo apt-get update && sudo apt-get -y upgrade")
print("say y or n")
input("Y/N: ")

# restarting portatin
print("well in about 5 secounds the program will restart")
time.sleep(5)
os.system("clear")
print("5")
time.sleep(1)
os.system("clear")
print("4")
time.sleep(1)
os.system("clear")
print("3")
time.sleep(1)
os.system("clear")
print("2")
time.sleep(1)
os.system("clear")
print("1")
time.sleep(1)
os.system("clear")
print("0")
time.sleep(.5)
os.system("clear")
time.sleep(3)
os.system("python3 index.py")
