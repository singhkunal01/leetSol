class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
    vector<int> res;
    sort(potions.begin(), potions.end());
    for (int i = 0; i < spells.size(); i++) {
        int l = 0, h = potions.size() - 1;
        while (l <= h) {
            int mid = l + ((h - l) >>1);
             if ((long long)(long long)spells[i] * (long long)potions[mid] >= success)h = mid - 1;
            else  l = mid + 1;
        }
        res.push_back(potions.size() - h - 1);
    }
    return res;
    }
};
