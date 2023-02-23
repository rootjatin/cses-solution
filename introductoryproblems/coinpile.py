a=int(input())
aa=[]
for i in range(a):
    aa.append([int (x) for x in input().split()])
for i in range(a):
    if(sum(aa[i])%3==0):
        if(min(aa[i][0],aa[i][1])*2 >=max(aa[i][0],aa[i][1])):
            print("YES")
        else:
            min(aa[i][0],aa[i][1])*2
            print("NO")
    else:
        print("NO")
 
