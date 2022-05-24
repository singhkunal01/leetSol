class Solution {
public:
    int longestValidParentheses(string s) {
/*        //using stack simple approach when the ith char is '(' then push into the stack else check whether the stack is empty or not if it is then also push the index else pop the value and then find the mx distance
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
                    mx = mx(mx,len);
                }
            }
        }
        return mx;
        //ABOVE APPROACH USES THE EXTRA SPACE 
        
        
        */
         int open = 0 , close = 0;
        int mx = 0;
        
        // 0 --> n
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(c == '('){
                open++;
            }
            else{
                close++;
            }
            
            if(open == close){
                int len = open + close;
                mx = max(mx,len);
            }
            else if(close > open ){
                open = close = 0;
            }
        }
        
