class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int v=0;
        int x=0;
        int n=colors.size();

        for(int i=0;i<colors.size();i++){
            if(colors[i]!=colors[0])
            v=max(v,i);
            if(colors[n-i-1]!=colors[n-1])
            x=max(x,i);
        }
        return max(x,v);
    }
};