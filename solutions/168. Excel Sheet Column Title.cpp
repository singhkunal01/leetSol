class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;char ch;
while(columnNumber>0){
    --columnNumber;//because indexing is 0 based at 25 there will be Z
    ch='A'+columnNumber%26;
    res=ch+res;
    columnNumber/=26;
}
        return res;
    }
};
