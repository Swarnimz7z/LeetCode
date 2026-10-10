class MyStack {
public:
    queue<int> sx;
    int s=0;

    MyStack() {
    }
    
    void push(int x) {
        sx.push(x);
        s++;
        cout<<s;
    }
    
    int pop() {
        int x=0;

        for(int i=0;i<s-1;i++){
            x=sx.front();
            cout<<x<<" ";
            sx.pop();
            sx.push(x);
        }
        x=sx.front();
        cout<<x<<" ";
        sx.pop();
        s--;
        return x;

    }
    
    int top() {
        return sx.back();
    }
    
    bool empty() {
        return sx.empty();
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