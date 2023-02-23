#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main (){
bool t=false;

ll a,temp;
cin>>a;
ll arr[a];
for (ll i=0;i<a;i++){
cin>>temp;
arr[i]=temp;
}
ll ab=0,per=0;
for (ll i=0;i<a;i++){
ab+=arr[i];
if(ab<0){
ab=0;
}
if(ab>per){
per=ab;
t=true;
}
}
if(t)
cout<<per;
else
cout<<*max_element(arr,arr+a);
}


