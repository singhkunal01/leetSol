class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //==using priority queue==
        priority_queue<int> store{stones.begin(),stones.end()};
        int first,second;
        while(size(store)>1){
            first = store.top();
            store.pop(); //first greater number is poped to do calculations
            second = store.top();
            store.pop(); //second greater number is poped to do calculations with first
            if(first-second>0){
                store.push(first-second);
            }
        }
        if(store.empty())
            return 0;
        return store.top();
    }
};
