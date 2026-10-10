class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int n=queries.size();
        int m=points.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                int x=(points[j][0]-queries[i][0])*(points[j][0]-queries[i][0]);
                int y=(points[j][1]-queries[i][1])*(points[j][1]-queries[i][1]);
                int z=ceil(sqrt(x+y));
                if(z<=queries[i][2])
                c++;
            }
            v.push_back(c);
        }
        return v;
    }
};