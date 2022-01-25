class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
    int n = size(arr);
    if (n < 3) return false;
    /*simple approach is just to find the peak or valley of the mountain if we find that
    then we can check easily left and right side of the mountain.*/
    int i = 0;
    while (i + 1 < n and arr[i] < arr[i + 1]) i++;
    //check that peak is initial or last then it is absolutely not possible to the array as the mountain array.
    if (i == 0 or i == n - 1) return false;
    int j = n - 1;
    while (j > i and arr[j] < arr[j - 1]) j--;
    return  j == i;
    }
};
