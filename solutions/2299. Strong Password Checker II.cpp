class Solution {
public:
    bool strongPasswordCheckerII(string pw) {
        int cts=0,ctc=0,ctsp=0,ctn=0;
        if(pw.size()<8) return false;
        for(int j= 0;j<pw.size();j++){
            if(pw[j]==pw[j+1]) return false;
            char i = pw[j];
            if(i>='a' and i<='z')cts++;
           else if(i>='A' and i<='Z')
                ctc++;
            else if(i>='0' and i<='9')ctn++;
            else ctsp++;
        }
        if(cts==0 or ctc==0 or ctsp==0 or ctn==0) return false;
        return true;
    }
};
