#include<bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
long long aa[1000001];
using namespace std;
int main (){
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll a,j=0;
aa[0]=1;
aa[1]=1;
aa[2]=2;
ll plug=0;
cin>> a;
if(a==1){
	cout<<1;
	return 0;}
long long temp=0;
for(int i=3;i<=a;i++){
       for(int j=i-1;j>=i-6 && j>=0 ;j--){
           aa[i]+=(aa[j])%mod;
       }
   }
cout<<aa[a]%mod;
}

