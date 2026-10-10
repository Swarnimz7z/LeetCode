class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            map<int,int> s;
            map<int,int> x;
            for(int j=i;j<n;j++){
                if(nums[j]%2==0)
                s[nums[j]]++;
                else
                x[nums[j]]++;
                if(s.size()==x.size())
                c=max(c,j-i+1);
            }
        }
        return c;
    }
};