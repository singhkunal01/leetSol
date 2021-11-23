class Solution {
public:
    bool areOccurrencesEqual(string s) {
     map<char, int> hash;
    for (auto &val : s) hash[val]++;
    int firstOccurence = hash.begin()->second;
    for (auto &ch : hash) {
        if (ch.second != firstOccurence) return false;
    }
    return true;
    
    }
};
