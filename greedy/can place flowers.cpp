class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        int temp=0 ; 
        for (int i=1; i<flowerbed.size()-1; i++){
            if (flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]!=1 ){
                temp+=1;
                flowerbed[i]=1;
            }
        }
        if (temp>=n){
            return true;
        }

        return false;
    }
};
