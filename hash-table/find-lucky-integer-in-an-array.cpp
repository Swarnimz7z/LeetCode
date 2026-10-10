class Solution {
public:
    int findLucky(vector<int>& arr) {
        int max=-1;
        unordered_map<int,int> x;
        for(auto it:arr){
            x[it]++;
        }
        for(auto it:x){
            if(it.first==it.second){
            if(max<it.first)
            max=it.first;
            }
        }
        return max;
    }
};