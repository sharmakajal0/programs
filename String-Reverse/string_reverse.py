#!usr/env/python3

def reverseString(teststr):
    if len(teststr) == 0:
        return
    
    temp = teststr[0]
    reverseString(teststr[1:])
    print(temp, end='')

testString = "ChandanSharma"
reverseString(testString)
print()