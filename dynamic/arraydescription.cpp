
#include<bits/stdc++.h>
using namespace std;
long long dp[100001][101];
long long mod= 1e9+7;
//main function dynamic programming 
int main()

{
    long long a,b;
    cin>>a ;
    cin>>b;
    long temp;
    int pie=0;
    long long aa[a];
    for (int i=0;i<a;i++){
        
        cin>>temp;
        aa[i]=temp;
    }
    if  (aa[0]==0){
    fill(dp[0],dp[0]+101,1);
        
    }
    else{
        dp[0][aa[0]]=1;
    }
    for (int i=1;i<a;i++){
        if(aa[i] == 0) {
			for (int j = 1; j <= b; j++) {
			dp[i][j] += dp[i-1][j];
			if(j - 1 > 0){ dp[i][j] += dp[i-1][j-1];}
			if(j + 1 <= b) {dp[i][j] += dp[i-1][j+1];}
			dp[i][j] %= mod;
						}
				}
				else {
						dp[i][aa[i]] += dp[i-1][aa[i]];
						if(aa[i] - 1 > 0) dp[i][aa[i]] += dp[i-1][aa[i]-1];
						if(aa[i] + 1 <= b) dp[i][aa[i]] += dp[i-1][aa[i]+1];
						dp[i][aa[i]] %= mod;
				}

        

        
    }
    for (int i=1;i<=b;i++){
        pie+=dp[a-1][i];
        pie%=mod;
    }
    
}
