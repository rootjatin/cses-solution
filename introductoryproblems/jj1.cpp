#include<iostream>
using namespace std;
int main()
{

long long a;
cin>>a;
while (1==1){
if(a==1){
cout<<a;
break;
}
if (a%2==0){
cout<<a<<" ";
a=a/2;
}
else{
cout<<a<<" ";
a= 3*a + 1;
}


}
return 0;
}
