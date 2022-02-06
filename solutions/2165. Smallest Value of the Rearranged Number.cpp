class Solution {
public:
    long long smallestNumber(long long num) {
        string n = to_string(abs(num));
        if(num==0) return 0;
        if(num>0){//number is +ve
            sort(n.begin(),n.end());
            int ind = n.find_first_not_of('0');
            swap(n[0],n[ind]);
        }
        else {
        sort(n.begin(),n.end(),greater<int>());
        }
        long long ans = stoll(n);
        if(num<0) ans = 0 - ans;
        return ans;
    }
};
