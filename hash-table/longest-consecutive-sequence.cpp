class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        set<int> z;
        for(auto it:nums)
        z.insert(it);
        int x=pow(-10,9)-2;
        int c=1;
        int v=0;
        for(auto it:z){
            if(it==x+1){
                c++;
                v=max(v,c);
            }
            else 
            c=1;
            x=it;
        }
        return max(v,c);
    }
};