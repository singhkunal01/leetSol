class Solution {
public:
    int longestValidParentheses(string s) {
        //using stack simple approach when the ith char is '(' then push into the stack else check whether the stack is empty or not if it is then also push the index else pop the value and then find the max distance
        stack<int> st({-1});
        int mx = 0;
        for(int i = 0;i<s.size();i++){
            //check if it is open paranthesis
            char curr = s[i];
            if(curr=='(')st.push(i);
            else{
                st.pop();
                if(st.empty()) st.push(i);
                else{
                    int len = i - st.top();
                    mx = max(mx,len);
                }
            }
        }
        return mx;
    }
};
