class Solution {
public:
    int minFlipsMonoIncr(string s) {
         int flips = 0, countOfOnes = 0;
        for (auto c : s) {
            if (c == '1') 
              countOfOnes++;
            else 
              flips++;
            // print(mp(flips,countOfOnes))
            flips = min(flips, countOfOnes);
        }
​
        return flips;
    }
};
