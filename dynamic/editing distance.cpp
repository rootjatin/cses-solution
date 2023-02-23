


#include <iostream>
#include<string>
using namespace std;

int main()
{
    int a,b;
    string p,r;
    cin>>p>>r;
    a=p.length();
    b=r.length();
    int dp[a+1][b+1];
    for (int i=0;i<=a;i++){
        for (int j=0;j<=b;j++){
            
            
        
    
    if(i==0){
        dp[i][j]=j;
    }
    else if(j==0){
        dp[i][j]=i;
    }
    else if(p[i-1]==r[j-1]){
        dp[i][j]=dp[i-1][j-1];
        
    }
    else{
        dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
                            
        
        
    }
        }
    }
    cout<<dp[a][b];
}
