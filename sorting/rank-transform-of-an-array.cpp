class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> v;

        int i=0;
        for(auto it:arr){
        if(v[it]==0){
        v[it]=i;
        }
        }

        for(auto it:v){
        i++;
        v[it.first]=i;
        }

        for(int i=0;i<arr.size();i++){
            arr[i]=v[arr[i]];
        }
        return arr;
    }
};