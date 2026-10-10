class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(auto it:nums)
        if(it%2==0)
        sum+=it;
        vector<int> x;
        int n=queries.size();
        for(int i=0;i<n;i++){
            int z=nums[queries[i][1]];
            if(z%2==0){
                nums[queries[i][1]]=z+queries[i][0];
                if(nums[queries[i][1]]%2==0)
                sum=sum-z+nums[queries[i][1]];
                else
                sum=sum-z;
            }
            else{
                nums[queries[i][1]]=z+queries[i][0];
                if(nums[queries[i][1]]%2==0)
                sum=sum+nums[queries[i][1]];
            }
            x.push_back(sum);
        }
        return x;
    }
};