class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        //if the number is odd then no need to find further
        vector<long long> vec;
        if(finalSum & 1)  return vec; 
        long long i = 2, sum = 0;
        while(sum+i <= finalSum){
            vec.push_back(i);
            sum+=i;
            i+=2;
        }
        // for(auto i:vec) cout<<i<<" ";
        // cout<<endl<<finalSum<<" "<<sum<<" "<<i<<endl;
        //now check how much we get more or less so that we can add the correct element
        int last = vec.size()-1;
        vec[last]+=finalSum-sum;
        return vec;
    }
};
