def BubbleSort(arr):
    for i in range(len(arr)):
        for j in range(len(arr)-i-1):
            if arr[j]> arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]



arr = [10, 20, 51, 2, 37]
BubbleSort(arr)
print(arr)
