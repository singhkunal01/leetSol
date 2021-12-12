class Solution {
public:
    int countPoints(string s) {
            int n = s.length();
    map<int, pair<int, pair<int, int>>> freq;//assuming the keys and values in such a way like:
    // {RodNumber,{countOfRed,{countOfBlue,countOfGreen }}}
    for (int i = 1; i < n; i += 2) {//since we have to take the frequency of each ring in the particular rod.
        // if the ring is reds
        char prev = s[i - 1];
        int curr = s[i] - 48;
        if (prev == 'R') {
            freq[curr].first++;
        }
        else if (prev == 'B') {
            freq[curr].second.first++;
        }
        else freq[curr].second.second++;
    }
    // print(freq)
    int count = 0;
//if the value at particular rod is atleast 1 then increase the counter
    for (auto val : freq) {
        int redCount = val.second.first, blueCount = val.second.second.first, greenCount = val.second.second.second;
        if (redCount >= 1 and blueCount >= 1 and greenCount >= 1)
            count++;
    }
    return count;
    }
};
