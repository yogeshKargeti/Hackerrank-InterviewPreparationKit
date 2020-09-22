f=input()
s=input()
first=list(f)
second=list(s)
lf=len(first)
ls=len(second)
for i in first:
  if i in second:
    second.remove(i)

same=ls-len(second)
total=lf+ls-(2*same)
print(total)
