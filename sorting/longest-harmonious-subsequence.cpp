class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int c=1;
            int x=0;
            for(int j=i+1;j<n;j++){
                if(nums[j]-1==nums[i]||nums[i]==nums[j]){
                    if(nums[i]==nums[j]-1)
                    x=1;
                c++;
                }
            }
            if(c>=max && x==1)
            max=c;
        }
        return max;

    }
};