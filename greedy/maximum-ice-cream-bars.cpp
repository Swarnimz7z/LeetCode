class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int i=0;
        int n=costs.size();
        int v=0;
        while(i!=n && coins>0){
            if(costs[i]<=coins){
                coins-=costs[i];
                v++;
                i++;
            }
            else{
                break;
            }
        }
        return v;
    }
};