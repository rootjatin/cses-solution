a=int(input())
aa=[]
for i in range(a):
	aa.append(input().split())
dp=[[0 for i in range(a)]for i in range(a)]
dp[0][0]=1
if (aa[0][0][0]=='*'):
    dp[0][0]=0
    a=0
for i in range(a):
	for j in range(a):
		if(aa[i][0][j]=='.'):
			if(j>0):
				dp[i][j]+=dp[i][j-1]%1000000007
			if(i>0):
				dp[i][j]+=dp[i-1][j]%1000000007

print(dp[a-1][a-1]%1000000007)
