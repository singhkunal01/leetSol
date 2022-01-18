class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int total = flowerbed.size();
    int canPlant = 0;
    if(total==1  and flowerbed[0]==0 and n<=1) return true;
        else{
            if(total==1 and flowerbed[0]==1 and n>=1)
                return false;
            else if(total==1 and flowerbed[0]==1 and n<=1)
                return true;
​
        }
    if (flowerbed[0] == 0 and flowerbed[1] == 0){
        canPlant++;
        flowerbed[0]=1;
    }
    for (int i = 1; i < total - 1; i++) {
        if (flowerbed[i] == 0) {
            if (flowerbed[i - 1] != 1 and flowerbed[i + 1] != 1){
                
                flowerbed[i]=1;
                canPlant++;
            }
        }
    }
    if (flowerbed[total - 2] == 0 and flowerbed[total-1] == 0){
        canPlant++;
        flowerbed[total-1]=1;
    }
        for(auto c:flowerbed) cout<<c<<" ";
    return canPlant >= n;
    }
};
