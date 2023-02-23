#include<iostream>
#include<vector>
#define ll long long 
int main(){
    ll i,j,a,temp=1;
    std::cin>>a;
    std::vector<ll> pp;
    
j=a;
std::vector<std::vector<ll>> pp1;
std::vector<ll> pp2;
for (ll y=0;y<j;y++){
for (ll z=0;z<2;z++){
std::cin>>temp;
pp2.push_back(temp);
}
pp1.push_back(pp2);
pp2.clear();
}
for (i=0;i<j;i++){

temp=std::max(pp1[i][0],pp1[i][1]);
if(temp%2==0){

std::cout<<((temp*temp-(temp-1))+pp1[i][0]-pp1[i][1])<<std::endl;

}
else{
std::cout<<((temp*temp-(temp-1))-pp1[i][0]+pp1[i][1])<<std::endl;

}
}
}

