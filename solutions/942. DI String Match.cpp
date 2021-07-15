class Solution {
public:
    vector<int> diStringMatch(string s) {
     // <============= MY SOLUTION ============>
        
        int n=size(s)+1; //given that the vector you have to return is +1 more sized than the given string
        int first=0,last=n-1; //as we observed in the given test cases that for first "I" we push the 0 value and increment it and similarly for "D" we first push the n-1 th value then decrement it 
        vector<int> perm(n);
        for(int i=0;i<n-1;i++){
            if(s[i]=='I') {
                perm[i]=first; //when the character is "I" push the 0 first then increment it
                first++;
            }
            if(s[i]=='D'){
               perm[i]=last; //when the character is "D" push the n-1 first then deccrement it
             last--;
            }
        }
        perm[n-1]=first; //it will insert by observing the given test cases that when the string is over then at last we insert the value of that pointer which is equal to the "I" th character of the string ..
        return perm;
        
    }
};
