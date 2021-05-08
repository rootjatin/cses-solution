#include<bits/stdc++.h>
#include<vector>
long long mod =1000000007;
long long poww(long long a,long long b);
long long poww(long long a,long long b){
long long c = 1;
while (b){
if(b&1){
c = c * a % mod;
}
a = a * a % mod;
b>>=1;
}
return c;
}
#include<math.h>
using namespace std;
int main(){
long long a,b,c,d,e;
vector<vector<long long >> pp;
vector<long long >pp1;
cin>>a;
for (long long i =0;i<a;i++){
cin>>b>>c;
pp1.push_back(b);
pp1.push_back(c);
pp.push_back(pp1);
pp1.clear();
}
e=1;
d=1;
long long  number=1,prd=1;
for (long long i=0;i<a;i++){
d=d*(pp[i][1]+1)%mod;
e=e*(poww(pp[i][0],pp[i][1]+1)-1)%mod * poww(pp[i][0]-1,mod-2)%mod;
prd=poww(prd,pp[i][1]+1)*poww(poww(pp[i][0],(pp[i][1]*(pp[i][1]+1)/2)),number)%mod;
number=number*(pp[i][1]+1)%(mod-1);
}
//prd=poww(num,d/2)%mod;
cout<<d%mod<<" "<<e%mod<<" "<<prd;


}
