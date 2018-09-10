def quick_sort(array, l, r):
    if l < r:
        print(array)
        q = partition(array, l, r)
        quick_sort(array, l, q - 1)
        quick_sort(array, q + 1, r)
 
def partition(array, l, r):
    x = array[r]
    i = l - 1
    for j in range(l, r):
        if array[j] <= x:
            i += 1
            array[i], array[j] = array[j], array[i]
    array[i + 1], array[r] = array[r], array[i+1]
    return i + 1
arr=[2,1,4,3,8,5,3]
quick_sort(arr,0,len(arr)-1)
print(arr)