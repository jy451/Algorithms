def quicksort(arr,l,r):
    if l<r:
        pos= partition(arr,l,r)
        quicksort(arr,l,pos-1)
        quicksort(arr,pos+1,r)
def partition(arr,l,r):
    if arr==[]:
        return
    pivot=arr[r]
    i=l-1
    for j in range(l,r):
        if arr[j]>=pivot:
            i+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[r],arr[i+1]=arr[i+1],arr[r]
    return i+1
arr=[2,3,1,4,2,3,5]
l=0
r=len(arr)-1
quicksort(arr,l,r)
print(arr)
