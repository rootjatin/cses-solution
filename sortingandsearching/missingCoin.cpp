#include<bits/stdc++.h>
using namespace std;
long long aa[200001];
int main(){
long long a;
cin>>a;
for (long long i=0; i<a;i++){
	cin>>aa[i];
}
sort(aa,aa+a);
long long r=0;
for (long long i=0;i<a;i++){
	if (r+1<aa[i]){
		break;
		}
	else{
		r+=aa[i];
		}
}
cout<<r+1;
}
