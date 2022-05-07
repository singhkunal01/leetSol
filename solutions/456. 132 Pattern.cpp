class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        //brute force - time limit exceeded O(N^3)
        
 /*↔*/
        
        //Better approach using only 2 loops O(N^2)
/*↔*/
        
        //Optimal approach using Monotonic stack 
        stack<int> st;
        int numsk = INT_MIN;
        for(int i = nums.size()-1 ;i>=0;i--){
            //check if any value is is less than the nums[k] then return true;
            if(nums[i]<numsk) return true;
            while(!st.empty() and st.top() < nums[i]){
                numsk = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};
