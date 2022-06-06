def InsertionSort(arr):
    n = len(arr)
    for i in range(1, n):
        value = arr[i]
        hole = i
        while(hole > 0 and arr[hole - 1] > value):
            arr[hole] = arr[hole-1]
            hole -= 1
        arr[hole] = value

    return arr

arr = [7, 6, 5, 4, 3, 2, 1]
print(InsertionSort(arr))
