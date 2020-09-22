def countswap(arr,n):
  count=0
  for i in range(0,n):
    while arr[i]!=i+1:
      temp=arr[i]
      arr[i]=arr[temp-1]
      arr[temp-1]=temp
      count+=1
  return count

n=int(input())
ar=list(map(int,input().split()))
print(countswap(ar,n))
