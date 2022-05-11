class Solution {
    void generateStrings(int n,int till,int &ct){
        if(n==0){
            ct++;
            return;
        }
        for(int i = 0;i<5;i++){
            if(i>=till) generateStrings(n-1,i,ct);
        }
    }
public:
    int countVowelStrings(int n) {
        int ct = 0;
        generateStrings(n,0,ct);
        return ct;
    }
};
