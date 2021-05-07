#include<bits/stdc++.h>
using namespace std;
int maxmn=2e5+10;
int main(){
long long i=0,j=0,m,n,k,a[maxmn],b[maxmn],temp=0;
cin>>m>>n>>k;
for (i=0;i<m;i++) {
cin>>a[i];
}
for (i=0;i<n;i++){
cin >>b[i];
}
sort(a,a+m);

sort(b,b+n);
temp=0;
i=0;
j=0;
while (i<m && j<n)
{
if(abs(a[i]-b[j])<=k){
j+=1;
i+=1;
temp+=1;

}
else{
if(a[i]-b[j]>k){
j+=1;
}
else{
i+=1;
}
}
}
cout<<temp;

}
