#include<bits/stdc++.h>
using namespace std;
int maxmn = 2e5+10;
int main (){
long long a,b,c[maxmn],temp=0,pp,pp1,temp1=0;
cin>>a>>b;
for (long long i=0; i<a;i++) cin>>c[i];
pp=a-1;
pp1=0;
sort(c,c+a);
//for (int i=0;i<a;i++) cout<<c[i]<<" ";
//cout<<endl;
while (pp>=0){

if (c[pp]+c[pp1]<=b){
//cout<<"b2"<<c[pp]<<" "<<c[pp1]<<endl;
pp-=1;
pp1+=1;
temp+=1;
temp1+=2;
//cout<<c[pp]<<" "<<c[pp1]<<"\n";
}
else{
//cout<<"b1"<<c[pp]<<" "<<c[pp1]<<endl;
pp-=1;
temp+=1;
temp1+=1;
//cout<<c[pp]<<" "<<c[pp1]<<endl;

}
if(temp1>=a){
break;
}

}
cout<<temp;
}
