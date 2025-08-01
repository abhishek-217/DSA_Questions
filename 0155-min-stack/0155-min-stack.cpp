class MinStack {
public:

    int *arr;
    int Uuper;
    int Size;
    MinStack() {
        Uuper = -1;
        Size = INT_MAX;
        arr = new int[Size];

    }
    
    void push(int val) {
        if(Uuper +1 < Size){
            Uuper++;
            arr[Uuper] = val;
        }
    }
    
    void pop() {
        if(Uuper >= 0){
            Uuper--;
        }
    }
    
    int top() {
        if(Uuper >= 0){
            return arr[Uuper];
        }

        return -1;
    }
    
    int getMin() {
        int mini = arr[0];
        if(Uuper >= 0){

            for(int i=1; i<=Uuper; i++){
                mini = min(mini, arr[i]);
            }
        }

        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */