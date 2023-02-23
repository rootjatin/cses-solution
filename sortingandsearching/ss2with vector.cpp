#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,i,temp;
vector <int> aa,bb;
cin>>a>>b>>c;
for (i=0;i<a;i++){
cin>>temp; 
aa.push_back(temp);

}
for (i=0;i<b;i++){
cin>>temp;
bb.push_back(temp);
}
sort(aa.begin(),aa.end());
sort(bb.begin(),bb.end());

i=0;
int j=0;
int count=0;
while (i<a && j<b){

if (abs(aa[i]-bb[j])<=c){
i+=1;
j+=1;
count+=1;
//cout<<i<<"the value of i"<<endl;
//cout<<j<<"the value of j"<<endl;
}
else {
if (aa[i]-bb[j]>c){
j+=1;

}
else{
i+=1;

}
}

}
cout<<count;
return 0; 
}
