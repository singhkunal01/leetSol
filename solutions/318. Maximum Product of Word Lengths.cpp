class Solution {
public:
    int maxProduct(vector<string>& words) {
    int n = size(words), ans = 0;
    vector<int> mask(n);
    for(int i = 0; i < n; i++) {
        for(auto& ch : words[i])           
            mask[i] |= 1 << (ch - 'a');     // hash the word
        for(int j = 0; j < i; j++)
            if((mask[i] & mask[j]) == 0)    // no common set bit in the hash of words[i] and words[j]
                ans = max(ans, int(size(words[i]) * size(words[j])));
    }   
    return ans;   
    }
};
​
///solution for reference :
//https://leetcode.com/problems/maximum-product-of-word-lengths/discuss/1233648/Short-and-Easy-Solution-w-Explanation-or-C%2B%2B-using-Bitset-and-Bit-masking-or-Beats-100
