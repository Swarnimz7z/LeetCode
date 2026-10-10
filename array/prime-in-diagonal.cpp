class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<int> z;
        for(int i=0;i<n;i++){
            z.push_back(nums[i][i]);
            z.push_back(nums[i][n-i-1]);
        }
        int max=0;
        for(auto it:z){
            int count=0;
            for(int i=2;i*i<=it;i++){
                if(it%i==0){
                    count++;
                    break;
                }
            }
                if(count==0 && it>=2){
                    if(it>=max){
                        max=it;
                    }
                }
        }
        return max;
    }
};