class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> v=nums;
        sort(nums.begin(),nums.end());
        vector<int> x;
        vector<int> r;
        int n=nums.size();
        int s=0;
        for(int i=n-k;i<n;i++){
        x.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            if(k==r.size())
            break;
            for(int j=n-k;j<n;j++){
                if(v[i]==nums[j]){
                    r.push_back(v[i]);
                    nums[j]=pow(-10,5)-1;
                    break;
                }
            }
        }
        return r;
    }
};