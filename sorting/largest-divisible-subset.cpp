class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int> z;

        int maxlen=1,lasti=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();

        vector<int> dp(n,1);

        vector<int> parent(n,-1);

        for(int i=0;i<n;i++){
            parent[i]=i;
        for(int j=0;j<i;j++){
            if(nums[i]%nums[j]==0 && dp[i]<dp[j]+1){
            dp[i]=dp[j]+1;
            parent[i]=j;
            }

            if(dp[i]>maxlen){
                maxlen=dp[i];
                lasti=i;
            }
        }
        }
        
        while(maxlen!=0){
            z.push_back(nums[lasti]);
            lasti=parent[lasti];
            maxlen--;
        }

        return z;
    }
};