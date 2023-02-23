a=input()
temp=1
te=a[0]
pp=[]
if (len(a)==1):
        pp.append(len(a))
for i in range(1,len(a)):
	if (a[i]==te):
		temp=temp+1
		pp.append(temp)
	else:
		te =a[i]
		pp.append(temp)
		temp=1
print(max(pp))
