class Solution {
public:
    int minMoves(int target, int md) {
/*if (md == 0) return target - 1;
    int cpy = target;
    vector<int> v;
    while (md != 0 and cpy > 1 ) {
        cpy /= 2;
        v.push_back(cpy);
        md--;
    }
    int sum = 0;
    for (int x : v) {
        int val = x * 2;
        int remaining = target - val;
        sum += remaining + 1;
        target = x;
    }
    sum += cpy - 1;
    return sum;
        */
        int cnt = 0;
        while (md != 0 and target > 1 ) {
        if(target%2==0) {   
             target /= 2;
             md--;
        }
            else 
                target-=1;
            cnt++;
    }
        cnt+=(target-1);
        return cnt;
    }
};
