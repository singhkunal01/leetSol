class Solution {
public:
    string getPermutation(int n, int k) {
    int fact = 1;
    vector<int> numbers;
    for (int i = 1; i < n; ++i) {
        fact *= i;
        numbers.push_back(i);
    }
    numbers.push_back(n);
    /*the question states that we need to find he permutation of [1,n] then for that we have to find the
        factorials so that first we find the correct row in which the first value of required permutation is located and we need to
        find the kth permutation in lexiographical order so now it becomes a cake walk
​
    FORMULAE :
    Total number of permutations for n are = n!
    */
//now we required a zero based approach so first reduce
    k--;
    string res = "";
    while (true) {
        res += to_string(numbers[k / fact]);
        numbers.erase(numbers.begin() + k / fact);
        if (numbers.size() == 0)break;
        k %= fact;
        fact /= numbers.size();
    }
    return res;  
    }
};
