class MyStack {//first approach using 2 queues
        queue<int> p,q;
    public:
    
    MyStack() {}
    
    void push(int x) {
        p.push(x);
    }
    
    int pop() {
        //first check the size of queue then except last one pop all values
        int n = p.size();
        while(n > 1){
            int top = p.front();
            p.pop();
            q.push(top);
            n--;
        }
        int currTop = p.front();
        p.pop();
        while(!q.empty()){
            p.push(q.front());
            q.pop();
        }
        return currTop;
    }
    
    int top() {
        //first check the size of queue then except last one pop all values
        int n = p.size();
        while(n > 1){
            int top = p.front();
            p.pop();
            q.push(top);
            n--;
        }
        int currTop = p.front();
        p.pop();
        while(!q.empty()){
            p.push(q.front());
            q.pop();
        }
        p.push(currTop);
        return currTop; 
    }
    
    bool empty() {
        return p.empty();
    }
};
​
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
