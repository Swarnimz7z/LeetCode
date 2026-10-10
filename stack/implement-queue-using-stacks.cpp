class MyQueue {
public:
    stack<int> v;
    stack<int> z;
    MyQueue() {

    }
    
    void push(int x) {
        v.push(x);
    }
    
    int pop() {
        int x=0;
        int y=0;
        while(!v.empty()){
            x=v.top();
            z.push(x);
            v.pop();
        }

        if(!z.empty())
        z.pop();
        while(!z.empty()){
            y=z.top();
            v.push(y);
            z.pop();
        }
        return x;
    }
    
    int peek() {
        int x=0;
        int y=0;
        while(!v.empty()){
            x=v.top();
            z.push(x);
            v.pop();
        }
        while(!z.empty()){
            y=z.top();
            v.push(y);
            z.pop();
        }
        return x;
    }
    
    bool empty() {
        return v.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */