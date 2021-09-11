    for(int i = n - 2; i >= 0; i--) {
    arr[i + 1] = arr[i];
    }
    arr[0] = lastVal;
    }
    */
​
    
// 3rd solution efficient one without using any extra space and TLE , ACCEPTED
// Using 2 pointers
    void reverseIt(vector<int> &arr,int start,int end){
        while(start<end){
            int temp= arr[start];
            arr[start]=arr[end];
            arr[end]= temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int> &arr, int k){
        int n = size(arr);
        if(n<2) return ;
        k = k%n; //when the is larget than the n then simply it starts rotating same as it is rotating from 1<=k<=n; 
        reverseIt(arr,0,n-k-1);
        reverseIt(arr,n-k,n-1);
        reverseIt(arr,0,n-1);
}
};
