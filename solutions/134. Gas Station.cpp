class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //brute force
        int gasSum = accumulate(gas.begin(),gas.end(),0);
        int costSum = accumulate(cost.begin(),cost.end(),0);
         if(gasSum<costSum) return -1;
            int costing = 0,pos = 0;         
        for(int i = 0;i<gas.size();i++){
            costing+=gas[i]-cost[i];
            if(costing<0){
                pos = i+1;
                costing = 0;
            }
        }
        return pos;
    }
};
