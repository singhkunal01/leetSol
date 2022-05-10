class Solution {
    private:
    void rec_func(int n,vector<vector<int>> &res,vector<int> &temp,int k){
        //base case if easy only when the size of temp is equal to k and sum of all values is equals to n then only we return else we check
        if(temp.size()==k and n==0){
            res.push_back(temp);
            return;
        }
        //to memoise some steps make sure to add some checks that if we have some values in the temp then no need to iterate over it from 0 just check from the lastValue + 1 to avoid the steps
        for(int i = (temp.size()==0)?1:temp.back()+1;i<=9;i++){
            //where we need to break, suppose we reached to 0 after subtracting i from n but we don't need any value less than 1 so break there
            if(n-i<0) break;
            temp.push_back(i);
            rec_func(n-i,res,temp,k);
            temp.pop_back();
        }
    }
​
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<vector<int>>res;
        rec_func(n,res,temp,k);
        return res;
        
    }
};
