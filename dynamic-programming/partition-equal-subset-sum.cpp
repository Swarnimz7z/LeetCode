class Solution {
public:
    bool SubSet(vector<vector<int>> &z,int index,int sum,vector<int> &nums){
        if(sum==0)
        return true;

        if(index==0)
        return nums[0]==sum;

        if(z[index][sum]!=-1)
        return z[index][sum];

        bool x=SubSet(z,index-1,sum,nums);

        bool y=false;
        if(nums[index]<=sum)
        y=SubSet(z,index-1,sum-nums[index],nums);

        return z[index][sum]=x||y;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto it:nums)
        sum+=it;
        if(sum%2==1)
        return 0;
        sum=sum/2;
        vector<vector<int>> z(nums.size(),vector<int>(sum+1,-1));
        return SubSet(z,nums.size()-1,sum,nums);

    }
};