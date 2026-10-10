class Solution {
public:
    void ThreeSum(int v,int n,vector<int>& nums,int x,vector<vector<int>> &z,int target){

        for(int i=v;i<n;i++){
            if(i>v){
                if(nums[i]==nums[i-1])
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k){
                long a=nums[i];
                long b=nums[j];
                long c=nums[k];
                long xs=x;
                long sum=xs+a+b+c;
               if(sum==target){
               z.push_back({x,nums[i],nums[j],nums[k]});

               j++;

               k--;

               while(j<k && nums[j]==nums[j-1])
               j++;
               while(k>j && nums[k]==nums[k+1])
               k--;
               }
               else if(sum<target){
                j++;
                }
               else{
                k--;
                }
            }
        }
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> z;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int x=0;x<n;x++){
            if(x>0){
                if(nums[x]==nums[x-1])
                continue;
            }
            ThreeSum(x+1,n,nums,nums[x],z,target);
        }
        return z;
    }
};