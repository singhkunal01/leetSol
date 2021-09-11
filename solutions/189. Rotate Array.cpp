class Solution {
public:
    void rotate(vector<int>& arr, int k) {
    /*
    NOTE: THIS CAN FAIL WHEN THE K IS MUCH LARGER THAN THE ARR SIZE IT GET OVERFLOWED.*/
        int n = size(arr);
            k= (k%n);
    vector<int> temp(k);
    int j = 0;
    for(int i = n - k; i < n; i++){
        temp[j++]=arr[i];
    }
    for(int i = n-k-1;i>=0;i--){
        arr[i+k]=arr[i];
    }
    for(int i =0;i<size(temp);i++){
        arr[i]=temp[i];
    }
        
        // 2nd solution my own but gives TLE
        /* int n = size(arr);
        while(k--) {
           int lastVal = arr[n - 1];
            for(int i = n - 2; i >= 0; i--) {
                arr[i + 1] = arr[i];
            }
            arr[0] = lastVal;
        }
        */
    }
};
