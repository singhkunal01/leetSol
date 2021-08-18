class Solution {
public:
    string makeGood(string s) {
            stack<char> st;
    for(int i=0;i<size(s);i++){
st.push(s[i]);
while(!st.empty() && (st.top()==s[i+1]+32 or st.top()==s[i+1]-32)) 
  st.pop(),i++;
    }
    string res="";
    while(!st.empty()){
      res+=st.top();
      st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
    }
};
