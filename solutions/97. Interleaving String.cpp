                    b   b  b    b  b   b  b    b
                   / \ / \ / \  /\ /\  /\ /\   /\
                   Here we explore till the pointer will place at n
​
2.Approach using DP Memo - Making a unique and place into map if it is present then return without recalculating otherwise find it.
        Pattern we like - s1+*s2+*+s3 so that everytime we finding the possible case mentioned above we place * so that the pattern will remain unique
TC - O(M*N)
​
*/
​
​
class Solution {
    bool check(string s1, string s2, string s3, int len1, int len2, int len3, int p1, int p2, int p3,  unordered_map<string, bool> &memo) {
​
        //base case if all the three pointers reached end then return true
        if (p3 == len3) return (p1 == len1 and p2 == len2) ? true : false;
        string key = to_string(p1) + "*" + to_string(p2) + "*" + to_string(p3);
        if (memo.find(key) != memo.end()) return memo[key];
​
        if (p1 == len1) //if the pointer1 reached at the end of size(s1) but 2 is somewhere in between then
            return memo[key] = s2[p2] == s3[p3] ? check(s1, s2, s3, len1, len2, len3, p1, p2 + 1, p3 + 1, memo) : false;
        if (p2 == len2) //if the pointer2 reached at the end of size(s2) but 1 is somewhere in between then
            return memo[key] = s1[p1] == s3[p3] ? check(s1, s2, s3, len1, len2, len3, p1 + 1, p2, p3 + 1, memo) : false;
​
        bool first = false, second = false;
        if (s1[p1] == s3[p3]) first = check(s1, s2, s3, len1, len2, len3, p1 + 1, p2, p3 + 1, memo);
        if (s2[p2] == s3[p3]) second = check(s1, s2, s3, len1, len2, len3, p1, p2 + 1, p3 + 1, memo);
        return memo[key] = first or second;
    }
public:
    bool isInterleave(string s1, string s2, string s3) {
        unordered_map<string, bool> memo;
        int len1 = s1.length(), len2 = s2.length(), len3 = s3.length();
        if (len1 + len2 != len3) return false;
        return check(s1, s2, s3, len1, len2, len3, 0, 0, 0, memo); //last 3 are the pointers
    }
};
