for i in range(int(input())):
  n=int(input())
  a=list(map(int,input().split()))
  bribe=0
  flag=False
  for i in range(n):
    if((a[i]-i-1)>2) :
      flag=True
      break
    else:
      bribe+=len([j for j in range(max(0,a[i]-2),i) if a[j]>a[i]])
  if(flag==True) :
    print("Too chaotic")
  else:
    print(bribe)
