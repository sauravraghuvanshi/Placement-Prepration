def InsertionSort(arr):
    for i in range(2, len(arr)):
        key = arr[i]
        j = i-1
        while j >= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j -= 1

        arr[j+1] = key

arr = list(input("Enter the element of arr: ").split())
#arr = [1, 8, 15, 2, 10]
InsertionSort(arr)

for v in arr:
    print(v)