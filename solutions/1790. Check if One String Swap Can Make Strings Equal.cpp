class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = size(s1) , diffChars = 0 ,ind[2]={0},j = 0;;
        for(int i = 0;i<n;i++){
            if(s1[i]!=s2[i]) {
                diffChars++;
                if(j<2)ind[j++]=i;
                              
            }
            if(diffChars>2) return false;
            
        }
        if(diffChars==1) return false;
        return (s1[ind[0]]==s2[ind[1]] && s2[ind[0]]==s1[ind[1]])?true:false;
    }
};
