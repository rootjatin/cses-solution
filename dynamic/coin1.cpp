#include<bits/stdc++.h>
#define ll long long 
#define mod 1000000007
using namespace std;

ll dp[1000001];
int main ()
{
ll a,b,c,i;
cin>>a>>b;
vector <ll> aa(a);
for (i=0;i<a;i++){
cin>>aa[i];
}
dp[0]=1;
for (c=0;c<=b;c++){
for (i =1;i<=a;i++){
if(c-aa[i-1]>=0){
dp[c]+=dp[c-aa[i-1]];
dp[c]=dp[c]%mod;
}
}
}
cout<<dp[b];
}
