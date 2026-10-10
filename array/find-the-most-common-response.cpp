class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        int n=responses.size();
        map<string,int> x;
        int s=0;
        for(int i=0;i<n;i++){
            int m=responses[i].size();
            int z=(i+1)*1000;
            for(int j=0;j<m;j++){
                if(x[responses[i][j]]/1000==i+1)
                continue;
                x[responses[i][j]]=z+(x[responses[i][j]])%1000+1;
                s=max(s,(x[responses[i][j]])%1000);
            }
        }
        for(auto it:x){
            if(it.second%1000==s)
            return it.first;
        }
        return " ";
    }
};