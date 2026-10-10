class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            string s=to_string(nums[i]);
            if(s.length()%2==0){
                c++;
            }
        }
        return c;
    }
};