class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> z;
        unordered_map<int,int> x;
        set<int> a=set(nums1.begin(),nums1.end());        
        set<int> b=set(nums2.begin(),nums2.end());
        set<int> c=set(nums3.begin(),nums3.end());
        for(auto it:a){
            x[it]++;
        }
        for(auto it:b){
            x[it]++;
        }
        for(auto it:c){
            x[it]++;
        }
        for(auto it:x){
            if(it.second>1){
                z.push_back(it.first);
            }
        } 
        return z;     
    }
};