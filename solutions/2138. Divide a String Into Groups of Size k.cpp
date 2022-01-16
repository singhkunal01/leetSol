class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
int n = size(s);
        vector<string>res;
        for(int i = 0;i<n;i+=k){
            string temp;
            int st = k;
            for(int j =i;j<k+i and j<n;j++ ){
                temp+=s[j];
            }
            if(temp.size()==k) 
                res.push_back(temp);
            else{
                int m = k-temp.size();
                while(m--){
                    temp+=fill;
                }
                res.push_back(temp);
            }
        }
        return res;
    }
};
