#include<bits/stdc++.h>
using namespace std; 

int main ()

{
int aa,temp;
cin>>aa; 
set<int>a;
for (int i =0; i<aa; i++)
{
cin>>temp;
a.insert(temp);
}	
cout<<a.size();
}
