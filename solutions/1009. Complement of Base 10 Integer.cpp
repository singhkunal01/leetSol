class Solution {
public:
    int bitwiseComplement(int n) {
        int temp = 1;
    while (temp < n) temp = (temp << 1) | 1;//try to make a number having all bits equals to 1
   /* 
   suppose we have n=5 then according to the hints given below the ,
   answer is equivalent to the XOR of n with the number having total bits equal to n but the temp will be that
    number whose all bits are 1
    */
    return n ^ temp;
    }
};
