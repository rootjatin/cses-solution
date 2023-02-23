#include<iostream>
int main(){
int a;
std::cin>>a;
if(a==1){
printf("%d",a);
return 0;
}
if (a<=3){
std::cout<<"NO SOLUTION";
return 0;
}
for (int i=1;i<a+1;i++){
if(i%2==0){
printf("%d ",i);
}
}
for (int i =0;i<a;i++){
if((i+1)%2!=0){
std::cout<<i+1<<" ";
}
}

}
