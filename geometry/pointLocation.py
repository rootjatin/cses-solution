a=int(input())
aa=[]
temp=[]
ab=0

for i in range(a):
	aa.append([int (x) for x in input().split()])
	# making the array for iteration 

for i in range(a):
        aa[i][2]=aa[i][2]-aa[i][0]
        aa[i][3]=aa[i][3]-aa[i][1]
        aa[i][4]=aa[i][4]-aa[i][0]
        aa[i][5]=aa[i][5]-aa[i][1]
        
for i in range(a):          
        p=aa[i][2]*aa[i][5]-(aa[i][3]*aa[i][4])
        if(p==0):
            print("TOUCH")
        elif(p>0):
            print("LEFT")
        else:
            print("RIGHT")
