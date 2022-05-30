#! env/usr/python3

def selectionSort(arr):
    n = len(arr)
    for i in range(n):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]

arr = [7, 6, 5, 3, 2, 4, 1, 0]
print("Before Sorting: ", arr)
selectionSort(arr)
print("After Sorting: ", arr)