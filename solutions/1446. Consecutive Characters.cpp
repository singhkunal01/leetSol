class Solution {
public:
    int maxPower(string s) {
        
        //my own solution
   /*        int len = s.length(), power = 1;
 for (int i = 0; i < len - 1;) {
        //check if the current character is same as the previous one then
       // check and increase the counter until we cannot find different
       // counter other than the current one 
        int curr = i;
        int next = i + 1;
        int maxLength = 1;
        if (s[curr] != s[next]) i++;
        //if the current character is sane as the next one then -
        else {
            while (s[curr] == s[next]) {
                maxLength++;
                next++;
            }
            i = next;
            power = max(power, maxLength);
​
        }
    }
    return power;
    */
    int maxLength = 1;
    int maxPower = 1;
    char prevChar = s[0];
    for (int i = 1; i < s.length(); i++) {
        char currChar = s[i];
        if (currChar == prevChar) {
            // if same as prevChar one, increase the maxLength
            maxLength++;
        } else {
            // else, reset the maxLength
            maxLength = 1;//since if it has not any that type of sub array then it can return ans as 1 for the single character.
            prevChar = currChar;
        }
        maxPower = max(maxPower, maxLength);
    }
    return maxPower;
    }
};
