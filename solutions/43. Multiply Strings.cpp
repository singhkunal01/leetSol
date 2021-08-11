class Solution {
public:
    string multiply(string num1, string num2) {
        int m = size(num1), n = size(num2);
         if(num1=="0"||num2=="0") return "0";
        vector <int> res(m + n,0);
         for ( int i = m- 1 ; i >= 0 ;  i--) {
             for ( int j = n- 1 ; j >= 0 ; j--) {
                 int product = (num1[i] - 48 ) * (num2[j] - 48 );
                 int temp1 = i + j;
                 int temp2 = i + j + 1 ;
                 int sum = product + res[temp2];
                 res[temp1] += sum/10;   
                 res[temp2] = sum% 10;   
                 // print(mp(res,mp(mp(temp1,temp2),mp(res[temp1],res[temp2]))))
            }
        }
        int i = 0;
        while (i < res.size() && res[i] == 0) 
            ++i;
        string ans = "";
        while (i < res.size()) 
            ans.push_back(res[i++] + 48);
        return ans;
    }
};
