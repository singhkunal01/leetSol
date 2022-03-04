class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        if(poured<1) return 0.0;
        double dp[101][101] = {0.0};
        dp[0][0]=poured;//initially that total champagne will be at first glass now
        for(int i = 0;i<100;i++){
            for(int j = 0;j<=i;j++){
                if(dp[i][j]>=1){//means it is overflowing
                    dp[i+1][j]+=(dp[i][j]-1)/2.0;//first glass of the next one row
                    dp[i+1][j+1]+=(dp[i][j]-1)/2.0;//next jth glass from the first glass in the next row
                    dp[i][j]=1;//fix the quantity to the one because it cannot crossed one units.
                    
                }
            }
        }
        
        return dp[query_row][query_glass];
    }
};
