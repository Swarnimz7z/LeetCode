class Solution {
public:
    void Answer(vector<int>& z,vector<int> &x,int v,int s,int &target){
        if(v==x.size()){
            if(s==target)
            z[0]++;
            return;
        }
        Answer(z,x,v+1,s+x[v],target);
        Answer(z,x,v+1,s-x[v],target);

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<int> z={0};
        Answer(z,nums,0,0,target);
        return z[0];
    }
};