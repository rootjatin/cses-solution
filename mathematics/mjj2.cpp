#include<iostream>
#include<vector>
#define rq 1000000007
long long temp(long long a,long long b){
long long rem=1;
if (b==0){
return 1;
}
else{
if(a==0){
return 0;
}
else{
while (b>0){
if(b&1){
rem=(rem*a)%rq;
}
a=(a*a)%rq;
b>>=1;


}
return rem;
}
}
}
int main(){
long long a,exp,base,tt;
std::cin>>a;
for (long long i=0; i<a;i++){
std::cin>>base>>exp;
tt=temp(base,exp);
std::cout<<tt<<"\n";
}

}
