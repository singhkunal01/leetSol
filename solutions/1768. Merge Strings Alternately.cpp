class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        //my own solution
        string s;
        int size1 = size(word1),size2 = size(word2);
        int i=0,j=0,k=0,maxLength = max(size1,size2);
        while(k< maxLength){
            if(i< size1){
                s.push_back(word1[i]);
                i++;
            }
            if(j<size2){
              s.push_back(word2[j]);
              j++;
            }
            k++;
        }
        return s;
    }
};
