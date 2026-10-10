class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        string s=folder[0];
        vector<string> x;
        x.push_back(s);
        for(int i=1;i<folder.size();i++)
        if(folder[i].find(s+"/")>0){
            s=folder[i];
            x.push_back(s);
        }
        return x;
    }
};