class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                c++;
                i--;
                n--;
            }
        }
        for(int i=0;i<c;i++){
            nums.push_back(0);
        }
    }
};