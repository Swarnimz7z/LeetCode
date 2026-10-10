class MinStack {
public:
    stack<long long> s;
    long long x=INT_MAX;

    MinStack() {
        
    }
    
    void push(int val) {
        long long v=val;
            if(val>x)
            s.push(val);
            else{
            s.push(2*v-x);
            x=val;
            }
    }
    
    void pop() {
        long long z=s.top();
        s.pop();
        if(z<x)
        x=2*x-z;
    }
    
    int top() {
        if(s.top()>x)
        return s.top();
        else
        return x;
    }
    
    int getMin() {
        return x;
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