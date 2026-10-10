class KthLargest {
public:
    priority_queue <int, vector<int>, greater<int>> pq;
    int x=0;
    int v=0;
    KthLargest(int k, vector<int>& nums) {
        v=k;
        if(x<k && nums.size()!=0){
        while(x<k && x<nums.size()){
        pq.push(nums[x]);
        x++;
        }
        }
        while(x!=nums.size()){
        if(nums[x]>=pq.top()) {
            pq.pop();

            pq.push(nums[x]); 
        }
        x++;
        }
    }
    
    int add(int val) {
        // if(pq.empty())
        // pq.push(val);

        if(pq.size()<v)
        pq.push(val);
        else if(val>pq.top()){
            pq.pop();

            pq.push(val); 
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */