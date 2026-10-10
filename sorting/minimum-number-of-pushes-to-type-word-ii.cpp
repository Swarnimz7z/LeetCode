class Solution {
public:
    int minimumPushes(string word) {
        int s=0;
        vector<int> x(26,0);
        
        for(auto it:word){
        x[it-'a']++;
        }

        sort(x.begin(),x.end());

        for(int i=25;i>=0;i--){
            if(x[i]==0)
                break;
            s=s+x[i]*((25-i)/8+1);
        }
        return s;
    }
};