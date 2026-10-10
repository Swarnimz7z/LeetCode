class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
        vector<vector<int>> graph(numCourses);
        vector<int> ans;

        vector<int> IN(numCourses,0);

        for(int i=0;i<n;i++){
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            IN[prerequisites[i][0]]++;

        }
        queue<int> v;
        for (int i=0;i<numCourses;i++) {
            if (IN[i]==0) {
                v.push(i);
            }
        }
        int count=0;
        while(!v.empty()){
            int node=v.front();
            ans.push_back(node);
            v.pop();
            count++;

            for(auto neighbour:graph[node]){
                IN[neighbour]--;
                if(IN[neighbour]==0)
                v.push(neighbour);
            }
        }
        if(count==numCourses)
        return ans;
        ans={};
        return ans;
    }
};