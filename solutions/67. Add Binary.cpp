class Solution {
public:
    string addBinary(string a, string b) {
            string ans="";
    int carry = 0, a1 = a.size() - 1, b1 = b.size()-1;
//place the both pointers at the end of string because it is obvious that the sum is perform from last.
    while (a1 >= 0 or b1 >= 0 or carry == 1  ) {
        if (a1 >= 0 ) {
            carry += a[a1--] - 48;
        }
        else carry += 0;
        if (b1 >= 0 ) {
            carry += b[b1--] - 48;
        }
        else carry += 0;
// now keep handling the cases when the carry becomes larger than 1 i.e.,transfer the carry to the other left digit and keep moving on.
        ans = char(carry % 2 + 48) + ans;
        carry /= 2;
    }
    return ans;
    }
};
