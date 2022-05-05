class MyStack {//first approach using 2 queues
    queue<int> p;
    public:
    MyStack() {}
    
    void push(int x) {
        p.push(x);
        for(int i = 0;i<p.size()-1;i++){
            p.push(p.front());
            p.pop();
        }
    }
    
    int pop() {
        int top = p.front(); 
        p.pop();
        return top;
    }
    
    int top() {
         return p.front();
    }
    
    bool empty() {
        return p.empty();
    }
};
​
/* What is the actual approach  ?
Basically except the top value in the queue pop all values in one go and then push back
again into the same queue 
​
Ex - p = {1,2,3}
query is - push(4) then,
p = 1,2,3,4 but after that
p = {4,1,2,3} which means the top value becomes the front one now which means now it works like a STACK
​
*/
