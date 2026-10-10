class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> z;
        double v=0.25*arr.size();
        for(auto it:arr){
            z[it]++;
            if(z[it]>v)
            return it;
        }
        return arr[0];
    }
};