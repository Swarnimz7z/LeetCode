class Solution {
public:
    bool cmp(pair<int,int>& a,pair<int,int>& b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> y;
        int n=nums.size();
        unordered_map<int,int> x;
        vector<pair<int,int>> z;
        for(int i=0;i<n;i++){
            x[nums[i]]++;
        }
        n=0;
        for(auto it:x){
            z.push_back(it);
        }
        sort(z.begin(),z.end(), [](pair<int,int>& a,pair<int,int>& b){
            return a.second>b.second;
        });
        for(auto it:z){
            if(n==k)
            break;
            y.push_back(it.first);
            n++;
        }
        return y;
        
    }
};