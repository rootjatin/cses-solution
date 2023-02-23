aa=input()
a=[int(x) for x in input().split()]
a.sort()
temp=0
a.append(a[len(a)-1])
for i in range(len(a)-1):
	if (a[i]!=a[i+1]):
		temp=temp+1
print(temp+1)
