n,d=map(int, input().split())
a=list(map(int,input().split()))
d=d%n
a=a[d:]+a[:d]
print(" ".join(map(str,a)))
