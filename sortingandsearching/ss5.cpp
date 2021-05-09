#include<bits/stdc++.h>
using namespace std;
int main (){
vector <pair <long long ,int  >>tt;
long long a,x,y,aa=0,aam=0;
cin>>a;
ios::sync_with_stdio(false);
cin.tie(0);
for(long long i=0;i<a;i++){
cin>>x>>y;
tt.push_back(make_pair(x,1));
tt.push_back(make_pair(y,0));
}
sort(tt.begin(),tt.end());
for (long long i=0;i<2*a;i++){
if (tt[i].second ==1){
aa+=1;
aam=max(aa,aam);
}
else{
aa-=1;
}
}
cout<<aam;

}
