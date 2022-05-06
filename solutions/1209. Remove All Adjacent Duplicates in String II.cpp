class Solution {
public:
    string removeDuplicates(string s, int k) {
    stack <pair<char, int>> st({{s[0], 1}});
    for (int  i = 1; i < s.length(); i++) {
        char ch = s[i];
        if (!st.empty() and ch == st.top().first) {
            st.top().second++;
        }
        else st.push({ch, 1});
        //check if it is equals to k then pop that whole character from stack
        if (st.top().second == k) st.pop();
    }
    string res;
    while (!st.empty()) {
        auto str = st.top();
        st.pop();
        while (str.second--)res+=str.first;
    }
     reverse(res.begin(),res.end());
    return res;
    }
};
​
