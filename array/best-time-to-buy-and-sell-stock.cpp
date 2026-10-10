class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int x=0;
        int y=INT_MAX;
        int final=0;
        for(int i=0;i<n;i++){
            if(prices[i]>x)
            x=prices[i];
            final=max(final,x-y);
            if(prices[i]<y){
                y=prices[i];
                x=prices[i];
            }
        }
        return final;
    }
};