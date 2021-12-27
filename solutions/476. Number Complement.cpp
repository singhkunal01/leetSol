class Solution {
public:
    int findComplement(int n) {
        int bits = floor(log2(n)) + 1;
        //first count the number of total bits in the given number then simply find the power of 2 by using these number of bits and by that find the nearest number having all bits 1 i.e., number (power of two)
        // and take the xor by that number which have all bits same 
return ((unsigned int)(1 << bits) - 1)^n;
    }
};
