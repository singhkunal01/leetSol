class Solution {
public:
    int arrangeCoins(int n) {
        /* MY CODE : 
         long var=n,i=1;
       while(var>0){
        var-=i;
        if(var<0) return i-1;
        i++;
       } 
       return i-1;
       */ 
        long copyOfn = n,left=0,right=copyOfn,mid;
        while (left <= right){
            mid = left + ((right - left)>>1);
            if (mid * (mid + 1) <= 2 * copyOfn) left = mid + 1;
            else right = mid - 1;
        }
        return (left - 1);
    }
};
