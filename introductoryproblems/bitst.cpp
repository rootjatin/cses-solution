#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
int main(){
ios::sync_with_stdio(false);
cin.tie(0);
long long a,res;
cin>>a;
res=1;
long long pwo=2;
while (a>0){
if(a & 1){
res=(pwo*res)%mod;
}
pwo=(pwo*pwo)%mod;
a>>=1;
}
cout<<res;

}
