# Circular Array Shifting
arr=[1,2,3,4,5]
last=arr[-1]

for i in range (len(arr)-1):
    
        for i in range(len(arr)-1,0,-1):
    
            t=arr[i]
            arr[i]=arr[i-1]
            arr[i-1]=t
print(arr)       