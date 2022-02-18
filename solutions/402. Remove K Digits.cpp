class Solution {
public:
    string removeKdigits(string num, int k) {
        //edge case :
        int n = num.size();
        if(n==k) return "0";//since we remove all digits then we get the least number that is 0.
        stack<char> st;
        for(int i = 0;i<n;i++){
                while( !st.empty()and st.top() > num[i]  and k > 0){
                    st.pop();
                    k--;
                }
            if(num[i]=='0' and st.empty()) continue;
            st.push(num[i]);
        }
​
        string ans;
        //now if there is no peak in the left then never the value of k will decrease and we get the same number in the stack which is wrong so,
        while(!st.empty() and k--) st.pop();//it will run k times and till the stack is not empty
        if(st.empty()) return "0";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};
