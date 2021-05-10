#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
vector<pair<ll, ll>> pp;
ll a,temp,temp2,i;
ll min=0,minn=0;
cin>>a;
for (i=0;i<a;i++){
cin>>temp>>temp2;
pp.push_back(make_pair(temp2,temp));
}
sort(pp.begin(),pp.end());
for(long long aa=0;aa<a;aa++){
if(minn<=pp[aa].second){
//cout<<pp[aa].first<<" t "<<pp[aa].second<<"\n";

minn=pp[aa].first;
min+=1;
}

}
cout<<min;
}
