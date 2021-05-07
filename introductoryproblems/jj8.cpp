#include<iostream>
int main(){
long long a;
std::cin>>a;
if ((a*(a+1))%4!=0){
std::cout<<"NO";
return 0;
}
else{
std::cout<<"YES"<<"\n";
if(a%2==0){

std::cout<<(a/2)<<"\n";
std::cout<<1<<" ";
for (long long i=4;i<=a;i+=3){
std::cout<<i<<" ";
if(i+1<=a)
std::cout<<i+1<<" ";

i=i+1;
}
std::cout<<"\n";
std::cout<<a/2<<"\n";
for(long long i=2;i<=a;i+=3){
std::cout<<i<<" ";
if(i+1<=a){
std::cout<<i+1<<" ";
}
i=i+1;
}
}
else{
std::cout<<a/2+1<<"\n";
for (long long i=1;i<=a;i+=3){
std::cout<<i<<" ";
if(i+1<=a)
std::cout<<i+1<<" ";

i=i+1;
}
std::cout<<"\n"<<a/2<<"\n";
for (long long i=3;i<=a;i+=3){
std::cout<<i<<" ";

if(i+1<=a)
std::cout<<i+1<<" ";
i=i+1;
}
}

}
}
