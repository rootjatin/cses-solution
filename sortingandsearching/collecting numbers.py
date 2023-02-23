a=int(input())
aa=[]
aa.append(0)
aa1=[int(x) for x in input().split()]
for x in aa1:
    aa.append(x)
c=1
j=1
aa2=[0 for i in range(len(aa))]
for i in range(len(aa)):
    aa2[aa[i]]=i
for i in range(1,len(aa)):
    if(j>aa2[i]):
        c+=1
    j=aa2[i]
print(c)
