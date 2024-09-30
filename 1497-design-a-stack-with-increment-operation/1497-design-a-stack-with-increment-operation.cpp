class CustomStack {
public:

    int *arr;
    int top;
    int maxSize ;
    // int e;
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
        arr = new int[maxSize];
        top =-1;
    }
    
    void push(int x) {
        if(maxSize - top > 1){
            top++;
            arr[top] = x;
        }
    }
    
    int pop() {
        if(top >= 0){
            int e = arr[top];
            top--;
            return e;
        }

        return -1;
    }
    
    void increment(int k, int val) {
        // i<k && k<top+1;
        int limit = min(k,top+1);
        for(int i =0; i< limit; i++){
            arr[i] = arr[i] + val;
            
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */