class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int m=intervals[0].size();
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> z;
        z.push_back(intervals[0]);
        int j=0;
        for(int i=1;i<n;i++){
            if(j<z.size() && intervals[i][0]<=z[j][1])
            z[j][1]=max(intervals[i][1],z[j][1]);
            else{
            z.push_back(intervals[i]);
            j++;
            }
        }
        return z;
    }
};