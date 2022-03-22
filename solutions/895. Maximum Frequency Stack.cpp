class FreqStack {
    priority_queue<pair<int,pair<int,int>>> pq;
    unordered_map<int,int> mp;
    int pos = 0;
public:
    FreqStack() {}
    
    void push(int val) {
        pq.push({mp[val]++,{pos++,val}});
    }
    
    int pop() {
        auto val = pq.top();pq.pop();
        int popped = val.second.second;
        mp[popped]--;
        return popped;
    }
};
​
/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
