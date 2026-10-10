class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        vector<vector<vector<int>>> z(n+1,vector(2,vector<int>(3,0))); 
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=1;j++){
                for(int k=1;k<=2;k++){
                if(j==0)
                profit=max(0+z[i+1][0][k],-prices[i]+z[i+1][1][k]);
                if(j==1)
                profit=max(0+z[i+1][1][k],prices[i]+z[i+1][0][k-1]);

                z[i][j][k]=profit;
            }
            }
        }
        return z[0][0][2];
    }
};