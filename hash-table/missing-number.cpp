class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0;
        unordered_map<int,int> z;
        int n=nums.size();
        for(int i=0;i<n;i++){
            z[nums[i]]=1;
        }
        for(int i=0;i<=n;i++){
            if(z[i]==0){
                x=i;
                break;
            }
        }
        return x;
    }
};