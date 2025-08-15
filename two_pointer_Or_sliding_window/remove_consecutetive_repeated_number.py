def rm_multiples_brutforce(arr):
    # space compleixity O(n)
    # time complexity O(n)
    record = [0]*len(arr)
    for i in range(len(arr)-1):
        if arr[i]==arr[i+1]:
            record[i]=1
            record[i+1]=1
    out = []
    for i in range(len(arr)):
        if record[i]==0:
            out.append(arr[i])
    return out
    
def rm_multiples(arr):
    # space compleixity O(0)
    # time complexity O(n*n) as pop operation takes another O(n)
    i=0
    while(i < len(arr)-1):
        if arr[i]==arr[i+1]:
            j=i+1
            while(j < len(arr) and arr[j]==arr[i]):
                arr.pop(j)
            arr.pop(i)
        else:
            i+=1
            
def rm_multiples_optimized(arr):
    # space compleixity O(0)
    # time complexity O(n)
    out = []
    i = 0
    while i < len(arr):
        j = i
        # Move j forward while same as arr[i]
        while j < len(arr) and arr[j] == arr[i]:
            j += 1
        if j == i + 1:  # No duplicate
            out.append(arr[i])
        i = j
    return out

arr = [1,2,2,3,4,5,5,3]
print(rm_multiples_optimized(arr))
# out>> [1,3,4,3]
rm_multiples(arr)
print(arr)
