#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main ()
{
ll a,b,temp;
vector<pair<ll,ll>> dd;
cin>>a>>b;
for (ll c=0;c<a;c++){
cin>>temp;
dd.push_back(make_pair(temp,c+1));
}
sort(dd.begin(),dd.end());
ll f,g;
f=0;
g=a-1;
while (f<g){
if(dd[f].first+dd[g].first==b){
cout<<dd[g].second<<" "<<dd[f].second;
return 0;
}
if(dd[f].first+dd[g].first<b){
f++;
}
else{
g--;
}
}
cout<<"IMPOSSIBLE";
 
}
