class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
    int l1 = word1.length(), l2 = word2.length();
    vector<int>hash(26, 0);
    for (char ch : word1)  hash[ch - 'a']++;
    for (char ch : word2) hash[ch - 'a']--;
    for (auto val : hash) {
        if (val < 0) val = -1 * val;//here in the second loop due to decrement some of the values become negative but acc. to question we have to find the difference so firstly if there are some values presnt which are greater than one then make sure these values can be converted into positive otherwise in test cases it may occurs failure because of the atmost 3 condition...
        if (val >3) return false;
    }
    return true;
    }
};
