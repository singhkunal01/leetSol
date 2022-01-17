class Solution {
public:
    bool wordPattern(string pattern, string s) {
    int n = pattern.size();
    stringstream ss(s);
    string word;
    int i = 0; unordered_map<string, char> wrdMap;
    unordered_map<char, string> chrMap;
    while (ss >> word) {
        if (i >= n) return false;
        char curr = pattern[i];
//if one value is mapped and the same as a value in another map is not mapped it means they overlapped
        if (wrdMap.count(word) != chrMap.count(curr)) return false;
        if (chrMap.count(curr)) {
            //if the character is present then check for its one to one mapped in another map if it is same then no problem otherwise return false
            if (wrdMap[word] != curr or chrMap[curr] != word) return false;
        }
        else {
            wrdMap.insert({word, curr});
            chrMap.insert({curr, word});
        }
        i++;
    }
//if the pointer reached at last position it means there is no problem and hence return true;
    return i == n;
    }
    
    //for other solution must watch this : https://youtu.be/XO4U2KWgIgY 
};
