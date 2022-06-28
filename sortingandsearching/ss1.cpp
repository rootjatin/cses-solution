#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,temp;
cin>>a; 
vector <int> aa; 
for(int i=0; i<a; i++){
cin>>temp;
aa.push_back(temp);
}
sort (aa.begin(),aa.end());
int a2=0;
for (int i=0;i<a;i++){
if (aa[i]!=aa[i-1]) a2=a2+1;
}
cout<<a2; 
return 0;
}
