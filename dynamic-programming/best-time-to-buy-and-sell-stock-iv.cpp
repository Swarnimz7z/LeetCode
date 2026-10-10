class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        vector<vector<vector<int>>> z(n+1,vector(2,vector<int>(k+1,0))); 
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=1;j++){
                for(int c=1;c<=k;c++){
                if(j==0)
                profit=max(0+z[i+1][0][c],-prices[i]+z[i+1][1][c]);
                if(j==1)
                profit=max(0+z[i+1][1][c],prices[i]+z[i+1][0][c-1]);

                z[i][j][c]=profit;
            }
            }
        }
        return z[0][0][k];
    }
};