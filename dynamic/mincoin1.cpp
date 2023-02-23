#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main (){
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll a,b,i,temp,temp2=0;
cin>>a>>b;
vector <ll> aa;
for (i=0;i<a;i++){
cin>>temp;
aa.push_back(temp);
}

ll dp[1000001];
for (i=1;i<=b;i++){
dp[i]=9999999999;
}
dp[0]=0;
for (i=1;i<=a;i++){
	for (ll j=0;j<=b;j++){
		if(j-aa[i-1]>=0){
			dp[j]=min(dp[j],dp[j -aa[i-1]]+1);
}
}
}
if(dp[b]==9999999999){
cout<<-1;
}
else{
cout<<dp[b];

}
}
