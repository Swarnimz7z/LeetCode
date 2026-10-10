class Solution {
public:

    int maxProduct(vector<string>& words) {
        int n=words.size();
        int s=0;
        vector<int> z(n,0);

        for(int i=0;i<n;i++){
            
            int x=words[i].size();

            for(auto it:words[i]){
                z[i]|=1<<(it-'a');
            }

            for(int j=0;j<i;j++){
                int y=words[j].size();
                if((z[i]&z[j])==0){
                s=max(s,x*y);
                }

            }
        }
        return s;
    }
};