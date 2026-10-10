class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        stack<int> x;
        for(int i=n-1;i>=0;i--){
            x.push(nums[i]);
        }
        for(int i=n-1;i>=0;i--){
            while(x.top()<=nums[i]){
                x.pop();
                if(x.empty())
                break;
            }
            if(x.empty()){
                res[i]=-1;
                x.push(nums[i]);
            }
            else{
                res[i]=x.top();
                x.push(nums[i]);
            }
        }
        return res;
    }
};