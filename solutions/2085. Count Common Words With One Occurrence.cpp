class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {//using single map
    map<string, int> mp1;
    for (auto s : words1)mp1[s]++;
    for (auto p : words2){
    if(mp1[p]<2)
        mp1[p]--;//after watching the tutorial of strive bhaiya.
        }
    int count = 0;
    for (auto x : mp1) {
    if(x.second == 0) count++;//simple intution , if both have the once occurence then it becomes zero and if any of them greater than the other one then it becomes less than 0
    }
    return count;
​
    }
};
