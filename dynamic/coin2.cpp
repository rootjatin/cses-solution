
#include<iostream>
#include<vector>
#define ll long long 
const int mod= int (1e9+7);
using namespace std;

long long dp[1000001];
int main ()
{
    ll a,b,c,temp;
    cin>>a>>b;
    vector <int > cc;
    for (int i=0;i<a;i++){
        cin>>temp;
        cc.push_back(temp);
    }
    dp[0]=1;
    for (int i=1;i<=a;i++){
        for (int j=0;j<=b;j++)
        {
            if (j-cc[i-1]>=0){
                
                dp[j]+=dp[j-cc[i-1]];
                dp[j]%=mod;
            }
        }
    }
    cout<<dp[b];
    
    
}
