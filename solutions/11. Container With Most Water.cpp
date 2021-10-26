class Solution {
public:
    int maxArea(vector<int>& height) {
//brute force one (TLE);
   /* int maxWater = INT_MIN;
for (int i = 0; i < height.size(); ++i)
{
    for (int j = i+1;j < height.size(); ++j)
    {
        int minWall = min(height[i],height[j]);
        maxWater = max(maxWater,minWall*(j-i));
    }
}
       return maxWater;
    }*/ //think something to optimise the code
        int maxWater = INT_MIN;
     int left = 0, right = height.size() - 1;
     while(left < right) {
         int minWall = min(height[left], height[right]);
         maxWater = max(maxWater, minWall * (right - left));
         height[left] < height[right] ? left++ : right--;
     }
     return maxWater;
    }
};
