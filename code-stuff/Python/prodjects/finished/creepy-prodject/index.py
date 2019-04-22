# Prints out 0,1,2,3,4
from time import sleep
import sys
import os

print("hello what is your name?")
Name = input("what is your name: ")

count = .1
while count < 99999:

    lines = ["I SEE YOU "+ Name]

    for line in lines:
        for c in line:
            print(c, end='')
            sys.stdout.flush()
            sleep(0.1)
        print('')
