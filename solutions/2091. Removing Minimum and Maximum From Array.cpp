class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
    int n = nums.size();
    /*minmax_element function gives the minimum and maximum element among all of the values and returns the values in iterator and also by default it place the minimum value at first then the maximum value .*/
    pair <vector<int>::iterator , vector<int>::iterator > p = minmax_element(nums.begin(), nums.end());
    int mini = p.first - nums.begin(); int maxi = p.second  - nums.begin();
    int fromFront = max(mini + 1, maxi + 1);/*if both the items are removed from front side .*/
    int fromBack = max(n - mini, n - maxi);/*if both the items are removed from back side .*/
    //totalDistance if both of the items are removed from either or back or front side.
    int minFromFrontAndmaxFromBack = mini + 1 + n - maxi;//if the minimum item is removed from front side while maximum item is removed from back side.
    int minFromBackAndmaxFromFront = maxi + 1 + n - mini;//if the minimum item is removed from back side while maximum item is removed from front side
    //we have to find the total distance doesn't matter from where the element is going to remove
    //so as we want to find the minimum distance out of all possible cases hence -
    int finalDistance = min({fromBack, fromFront, minFromBackAndmaxFromFront, minFromFrontAndmaxFromBack});
    return finalDistance;
    }
};
