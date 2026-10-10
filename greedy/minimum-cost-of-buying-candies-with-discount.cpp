class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int v=0;
        int c=1;
        for(int i=cost.size()-1;i>=0;i--){
            if(c==3){
            c=1;
            continue;
            }
            v=v+cost[i];
            c++;
        }
        return v;
    }
};