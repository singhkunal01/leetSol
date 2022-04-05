class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftDeewar = 0,n = height.size() ,rightDeewar = n - 1,kitnaPaani = 0;
        //since what can be the possible area i.e., two walls contains at max
        // area = (l * b) where l is the height of possible tower and width is distance between them
       while(leftDeewar < rightDeewar){
            int chotiDeewarDoneMeSe = min(height[leftDeewar],height[rightDeewar]);
            kitnaPaani = max(kitnaPaani,chotiDeewarDoneMeSe*(rightDeewar-leftDeewar));
           //now move both the pointers
           height[leftDeewar]< height[rightDeewar]?leftDeewar++:rightDeewar--;
        }
        return kitnaPaani;
    }
};
