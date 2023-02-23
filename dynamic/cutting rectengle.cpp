
#include <iostream>

using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long dp[501][501];
    
    for (int i=1;i<=a;i++){
        for (int j=1;j<=b;j++){
            if (i==j){
                dp[i][j]=0;
            }
            else{
                long long ans=10007;
            for (int k=1;k<j;k++){
                ans=min(ans,1+dp[i][j-k]+dp[i][k]);
            }
            for (int l=1;l<i;l++){
                 ans=min(ans,1+dp[i-l][j]+dp[l][j]);
            }
            dp[i][j]=ans;
            }
            
        }
    }

    cout<<dp[a][b];
}
