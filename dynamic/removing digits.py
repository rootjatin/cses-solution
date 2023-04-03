a=int (input())
b=0
def digit(x):
    xx=str(x)
    x1=[int(x) for x in xx]
    print(x1)
    #confirming the changes
    return max(x1)

while(a>0):
    a-=digit(a)
    b+=1

print(b)
