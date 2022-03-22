class Solution {
public:
    string getSmallestString(int n, int k) {
       string res(n,'a');
        k-=n;//as we already placed n characters of 'a' so reduce it
        int i = n - 1,temp=0;
        while(k>0){
            temp = min(k,25);
            res[i]+=temp;
            k-=temp;
            i--;
        }
        return res;
    }
};
