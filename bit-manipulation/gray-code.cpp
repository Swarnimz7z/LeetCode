class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> z;
        for(int i=0;i<pow(2,n);i++){
            z.push_back(i^(i/2));
        }
        return z;
    }
};