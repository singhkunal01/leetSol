class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector <int> finalAns;
        vector <int> freqArr(1001,0);
       for(int &x:arr1) freqArr[x]++;
       for(int &y:arr2) {
        //insert the values equivalent to total number of occurence in arr1
            while(freqArr[y] > 0){
                finalAns.push_back(y);
                freqArr[y]--;
            }
        }
/*now in the frequency array only
those numbers occurence is present which are not in arr2 i.e., different values(uncommon between arr1 and arr2)*/
        for(int i = 0; i < 1001; i++){
            while(freqArr[i] > 0){
                finalAns.push_back(i); //here we insert i means the at the index the occurence is situated
                freqArr[i]--;
            }
        }
        return finalAns;
    }
};
