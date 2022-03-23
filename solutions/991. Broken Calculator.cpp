class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int res = 0;
        while(target > startValue){
            if(target&1)//means the target is odd
            {
                target++;
                res++;
            }
            else{
                target/=2;
                res++;
            }
        }
        return res + (startValue - target);
    }
};
