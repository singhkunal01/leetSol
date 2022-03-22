class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int> countTops(7),countBottoms(7),countSame(7);
        int n = tops.size();
        for(int i = 0;i<n;i++){
           countTops[tops[i]]++;
            countBottoms[bottoms[i]]++;
            if(tops[i]==bottoms[i]) countSame[tops[i]]++;
        }
        for(int i = 1;i<7;i++){
            if(countTops[i]+countBottoms[i]-countSame[i]==n)
                return n - max(countTops[i],countBottoms[i]);
        }
        return -1;
    }
};
