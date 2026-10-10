class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> x;
        x.push_back(pref[0]);
        for(int i=0;i<pref.size()-1;i++){
            int z=pref[i]^pref[i+1];
            x.push_back(z);
        }
        return x;
    }
};