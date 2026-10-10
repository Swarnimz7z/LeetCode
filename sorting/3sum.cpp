class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> z;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        int k=n-1;
        while(i<n-1){
            if(k<i || j>n-1 || k<=j || (i>0  && nums[i]==nums[i-1])){
                i++;   
               j=i+1;
               k=n-1;
               continue;
            }
            if(nums[i]+nums[j]+nums[k]==0){
               z.push_back({nums[i],nums[j],nums[k]});

               while(j<k && nums[j]==nums[j+1])
               j++;
               while(k>j && nums[k]==nums[k-1])
               k--;

               j++;
            }
            else if(nums[i]+nums[j]+nums[k]<0){
                j++;
            }
            else{
                k--;
            }
        }
        return z;
    }
};