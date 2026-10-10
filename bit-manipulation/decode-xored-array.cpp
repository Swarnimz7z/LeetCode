class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> x;
        x.push_back(first);
        for(int i=0;i<encoded.size();i++){
            x.push_back(x[i]^encoded[i]);
        }
        return x;
    }
};