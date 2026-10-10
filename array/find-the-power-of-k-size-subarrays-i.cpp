class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> x;
        for(int i=0;i<n-k+1;i++){
            int v=nums[i];
            int max=v;
            for(int j=i+1;j<i+k;j++){
                if(nums[j]==v+1)
                {max=nums[j];
                v=max;}
                else
                {max=-1;
                break;}
            }
            x.push_back(max);
        }
        return x;
    }
};