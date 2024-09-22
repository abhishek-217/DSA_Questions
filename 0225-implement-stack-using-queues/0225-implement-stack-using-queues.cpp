class MyStack {
public:
    MyStack() {
        
    }
    queue<int>q1;
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        // q1.push;
        for(int i =1; i<q1.size(); i++){
            q1.push(q1.front()); 
            q1.pop();

        }
        int ele = q1.front();
        q1.pop();
        return ele;
    }
    
    int top() {
         for(int i =1; i<q1.size(); i++){
            q1.push(q1.front()); 
            q1.pop();

        }
        int ele = q1.front();
        q1.push(q1.front());
        q1.pop();
        return ele;
          
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */