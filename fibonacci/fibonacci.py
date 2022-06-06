#!/usr/bin/python3

def PrintFibonacci(n):
    for i in range(n):
        if i == 0:
            a = i
            print(a, end=",")
        elif i == 1:
            b = i
            print(b, end=",")
        else:
            print(a + b, end=",")
            b = a + b
            a = b - a
    print()

print("Enter the count for fibonacci sequence: ")
n = int(input())
PrintFibonacci(n)