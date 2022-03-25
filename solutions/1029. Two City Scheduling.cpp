bool compar(const vector<int>&a,const vector<int> &b){
        return (a[0]-a[1]) < ( b[0] - b[1]);
}
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
//  why the previous solution fails because of wrong reading of the question
//everytime  we havenot to take minimum of costs because we have 2n peoples so we have to take n of A and n of B to get total minimum cost
        
        //final approach is that first we have to find the difference b/w these pairs and sort them according to their differences so that we can take equally number of A cities and B cities
        int res = 0, n = costs.size();
        sort(costs.begin(),costs.end(),compar);
        
        for(int i = 0;i<n/2;i++)res+=costs[i][0];
        for(int i = n/2;i<n;i++)res+=costs[i][1];
        return res;
    }
};
