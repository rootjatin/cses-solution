def josephus(n, k):
    if(n==1):
        #when n==1 answer would be 1 
        return 1
    if(k<=(n+1)/2):
        if(2*k>n):
            return (int(2*k%n))
        else:
            return(int(2*k))
    p=josephus(n//2,k-(n+1)//2)
    if(n%2==1):
        return int(((2*p)+1))
    else:
        return int(2*p -1)

aa=int(input())
a=[]
for i in range(aa):
    a.append([int (x) for x in input().split()])

for i in range(aa):
    print(josephus(a[i][0],a[i][1]))

print("completed")
    
