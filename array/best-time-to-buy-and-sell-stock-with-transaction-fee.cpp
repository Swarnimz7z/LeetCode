class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>> z(n+1,vector<int>(2,0)); 

        int profit;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=1;j++){
                if(j==0)
                profit=max(0+z[i+1][0],-prices[i]+z[i+1][1]-fee);
                if(j==1)
                profit=max(0+z[i+1][1],prices[i]+z[i+1][0]);

                z[i][j]=profit;
            }
        }
        return z[0][0];
    }
};