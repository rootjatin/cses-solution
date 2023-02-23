#include<iostream>
#define ll long long 
#include<vector>
using namespace std;
 
#define e 2.1
int main(){
    ll a,b,ch1=0,ch2=0;
    cin>>a>>b;
    int dp[a+1][b+1];
    vector<ll> price(a) ,pages(a) ;
    for (int i =1;i<=a;i++)
    cin>>price[i];
    for (int i=1;i<=a;i++)
    cin>> pages[i];
    for (int i =0;i<=a;i++){
        for (int j=0;j<=b;j++){
            if(i==0|| j==0)
                dp[i][j]=0;
            else{
                if(i==1)
                ch1=0;
                else
                ch1=dp[i-1][j];
                if(j<price[i]){
                    ch2=0;
                    
                }
                else{
                    
                    ch2=pages[i]+dp[i-1][j-price[i]];
                    
                }
                dp[i][j]=max(ch1,ch2);
                
            }
        }
        
    }
    cout<<dp[a][b];
    
    
}
