class Solution {
public:
   char nextGreatestLetter(vector<char>& letterArray, char targetElement) {
       for (char eachChar: letterArray)
          if (eachChar > targetElement) 
            return eachChar;
      return letterArray.at(0);
  }
};
