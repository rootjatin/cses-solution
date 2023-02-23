a=int(input())
aa=[]
aa=[int (x) for x in input().split()]
aa.sort()
p=aa[(a//2)]
aa1=0
for x in aa:
    aa1+=abs(x-p) 
print(aa1)
