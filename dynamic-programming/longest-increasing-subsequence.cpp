class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> z;
        z.push_back(nums[0]);
        int n=nums.size();
        int v=1;
        for(int i=1;i<n;i++){
            int s=z.size();
            v=max(v,s);
            if(nums[i]>z[s-1])
            z.push_back(nums[i]);
            else{
                int x=-1;
                for(int j=s-1;j>=0;j--){
                if(nums[i]>z[j]){
                    x=j;
                    break;
                }
                }
                z[x+1]=nums[i];
            }
        }
        return z.size();
    }
};