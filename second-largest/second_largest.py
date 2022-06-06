#!/usr/bin/python3

def FindSecondLargest(arr):
    max = 0
    for i in range(len(arr)):
        if arr[i] > max:
            max = arr[i]
            maxIndex = i
    
    max = 0
    for i in range(len(arr)):
        if arr[i] > max and i != maxIndex:
            max = arr[i]
    
    return max
        

def sortArray(arr):
    for i in range(len(arr) - 1):
        flag = 0
        for j in range(len(arr) - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                flag = 1
        if flag == 0:
            break

    return arr

arr = [13, 43, 12, 10, 32, 2, 7, 86, 98]
print(arr)
sortArray(arr)
print(arr)
#print(FindSecondLargest(arr))