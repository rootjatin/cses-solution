#include<iostream>
#include<vector>
int main(){
    long long i,j,c,temp;
    std::vector <int> pp;
    std::cin>>c;
    for (i=0;i<c;i++){
        std::cin>>temp;
        pp.push_back(temp);
    }
    temp=0;
    for (j=0;j<c-1;j++){
        if(pp[j]>pp[j+1]){
            temp+=(pp[j]-pp[j+1]);
            pp[j+1]=pp[j];
        }
    }
    std::cout<<temp;
}