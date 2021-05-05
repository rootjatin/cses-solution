#include<iostream>
int main(){
long long a,temp=0;
std::cin>>a;
for(long long i=1;i<=a;i++){

temp=((i*i)*(i*i-1)/2) -4*(i-2)*(i-1);
std::cout<<temp<<"\n";
}
}
