class Solution {
public:
    int compareVersion(string v1, string v2) {
        int n = v1.size(),m = v2.size(),i = 0,j = 0;
        while(i<n or j<m){
            int p = 0,t=0;
            while(i<n and v1[i]!='.'){
                t = t*10+(v1[i]-48);
                i++;
            }
             while(j<m and v2[j]!='.'){
                p = p*10+(v2[j]-48);
                j++;
            }
            if(t>p) return 1;
            else if(p>t) return -1;
            i++,j++;
        }
        return 0;
    }
};
