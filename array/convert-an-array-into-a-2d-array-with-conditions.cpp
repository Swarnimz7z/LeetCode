class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> v;
        unordered_map<int,int> x;
        for(auto it:nums){
            x[it]++;
        }
        int n=x.size();
        while(n!=0){
            vector<int> z;
            n=x.size();
            for(auto it:x){
                int s=it.second;
                if(s==0){
                    n--;
                    continue;
                }
                s--;
                z.push_back(it.first);
                x[it.first]--;
            }
            if(z.empty()==true)
            continue;
            v.push_back(z);
        }
        return v;
    }
};