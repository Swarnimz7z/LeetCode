class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> x=set(nums.begin(),nums.end());
        for(auto it:nums){
            string s=to_string(it);
            reverse(s.begin(),s.end());
            x.insert(stoi(s));
        }
        return x.size();
    }
};