class Solution {
public: 
    int trap(vector<int>& height) {
     int n = size(height);
     int ans = 0;
     //brute force 
        int lmax[n],rmax[n];
        lmax[0]=height[0];
        rmax[n-1]=height[n-1];
        
    for(int i = n-2;i>=0;i--){
        rmax[i]=max(height[i],rmax[i+1]);
    }
    for(int i = 1;i<n;i++){
lmax[i] = max(height[i],lmax[i-1]);
    }
        for(int i = 0;i<n;i++){
            ans+=(min(lmax[i],rmax[i])-height[i]);
        }
    return ans;
    } 
​
};
