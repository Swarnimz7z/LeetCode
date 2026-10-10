class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        if(n<2)
        return 0;

        vector<int> x(2,0);
        int v=0;
        while(true){
            x[0]=0;
            x[1]=0;
            v=0;
            for(int i=0;i<n;i++){
                if(nums[i]==0)
                v++;
                x[nums[i]%2]++;
                nums[i]=nums[i]>>1;
            }
            s+=x[0]*x[1];
            if(v==n)
            return s;
        }
        return s;
    }
};