class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
    //     vector<int> fr(n,0);
    //     for(int i = 0;i<n;i++) 
    //         if(s[i]=='a') 
    //             fr[i]=-1;
    //     for(int i =1;i<n;i++)
    //         if(fr[i]-fr[i-1]!=0 and s[i]=='a')
    //             return false;
    // return true;
        for(int i =1 ;i<n;i++){
            //if b occurs before a then return false; 
            if(s[i-1]=='b' and s[i]=='a')
                return false;
        }
        return true;
    }
};
