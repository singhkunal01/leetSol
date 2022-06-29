bool comp(vector<int> &a,vector<int> &b){
    //if both the heights are equal then sort it according to the number of peoples
    if(a[0]==b[0]) return a[1]<b[1];
    return a[0]<b[0];
}
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n = people.size();
        vector<vector<int>> res(n,vector<int> (2,-1));
        int count = 0;
        sort(begin(people),end(people),comp);
        for(int i = 0;i<n;i++){
            count = people[i][1];
            for(int j =0;j<n;j++){
                if(res[j][0]==-1 and count ==0){
                    //if the place is vacant and no more values to the left remains which satisfy the condition then place the person there
                    res[j][0]=people[i][0];
                    res[j][1]=people[i][1];
                    break; //so that in future it will not change 
                }
                else if(res[j][0]==-1 or res[j][0]>=people[i][0]) count--;
            }
        }
        return res;
    }
};
