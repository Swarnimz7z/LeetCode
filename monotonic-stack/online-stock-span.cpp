class StockSpanner {
public:
    stack<int> s;
    vector<int> z;
    int c=0;
    int v=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        z.push_back(price);
        while(!s.empty() && z[s.top()]<=price){
        s.pop();
        }
        if(s.empty())
        v=c+1;
        else
        v=c-s.top();
        s.push(c);
        c++;
        return v;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */