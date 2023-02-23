#include<iostream>
#include<vector>
int main ()
{
int a,temp;
std::cin>>a;
std::vector <int> pp;

for(int i =0;i<a;i++ ){

pp.push_back(0);

}
for (int i =0;i<a-1;i++){
std::cin>>temp;
pp[temp-1]=temp;
}
for (int i=0;i<a;i++){
if(pp[i]==0)
printf("%d",i+1);
}
}
