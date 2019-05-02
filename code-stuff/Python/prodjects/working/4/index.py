import os
import time

print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")
print("5. Exit")
choice = int(input("Enter your choice: "))
os.system("clear")
if (choice>=1 and choice<=4):
    print("Enter two numbers: ")
    x = int(input())
    y = int(input())
    if choice == 1:
    	res = x + y
    	print("Result = ", res)
    elif choice == 2:
    	res = x - y
    	print("Result = ", res)
    elif choice == 3:
    	res = x * y
    	print("Result = ", res)
    else:
    	res = x / y
    	print("Result = ", res)
elif choice == 5:
    exit()
else:
    print("Wrong input..!!")
