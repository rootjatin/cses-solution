#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main (){
std::multiset <long long ,std::greater<int>> a;
long long i,aa,temp,pp;
cin>>aa>>pp;
for (int t=0;t<aa;t++){
cin>>temp;
a.insert(temp);
}
for(long long t=0; t<pp;t++){
cin>>temp;
auto tt= a.lower_bound(temp);
if(tt==a.end()){
cout<<-1<<"\n";
}
else{

cout<<*tt<<std::endl;
a.erase(tt);
}
}
}
