class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        int v=0;

        for(auto it:nums)
        if(it==0)
        x++;

        for(int i=0;i<n;i++){
            if(nums[i])
            continue;

            int z=0;
            int j=n-1;
            while(nums[j]==0){
                z++;
                if(z==x)
                return v;
                j--;
            }
            swap(nums[i],nums[j]);
            v++;
        }
        return v;
    }
};