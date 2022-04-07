class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0, high = size(letters) - 1;
        while(low<= high){
            int mid = low+(( high-low)>>1);
            if(letters[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        if(low >=size(letters)) return letters[0];
        return letters[low];
    }
};
