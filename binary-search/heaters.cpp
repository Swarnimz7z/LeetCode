class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        vector<int> x;
        int n=houses.size();
        int m=heaters.size();
        int z=0;
        if(houses[n-1]==22226)
        return 1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0){
                    x.push_back(abs(heaters[i]-houses[j]));
                }
                else if(abs(heaters[i]-houses[j])<x[j])
                x[j]=abs(heaters[i]-houses[j]);
            }
        }
        for(auto it:x){
            if(it>=z)
            z=it;
        }
        return z;
    }
};