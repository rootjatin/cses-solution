#include<bits/stdc++.h>
using namespace std;


const long long maxx = 1e6+6;
long long dp[1000001][2];

const int mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
                                    
    


    dp[1][0] = dp[1][1] = 1;
    for (long long i = 2; i < maxx; i++) {
        dp[i][0] = (dp[i-1][0]*4%mod + dp[i-1][1])%mod;
        dp[i][1] = (dp[i-1][0] + dp[i-1][1]*2%mod)%mod;
    }

    int t; cin>>t;
    while(t--) {
        long long n,p; cin>>n;
        p=(dp[n][0] + dp[n][1])%mod;
        cout<<p<<endl;
    }

}