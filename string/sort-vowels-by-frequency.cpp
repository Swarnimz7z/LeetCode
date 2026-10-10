class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char,int>x;
        vector<int> v(26,0);
        int c=5;

        for(auto it:s){
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'){
            x[it]++;

            if(v[it-'a']==0){
            v[it-'a']=c;
            c--;
            }

            }
        }

        priority_queue<vector<int>> q;
        for(auto it:x){
            q.push({it.second,v[it.first-'a'],it.first-'a'});
        }
        
        string z="";
        while(!q.empty()){
            for(int i=0;i<q.top()[0];i++){
                char ch='a'+q.top()[2];
                z+=ch;
            }
            q.pop();
        }

        int i=0;
        int n=s.size();
        
        for(int j=0;j<n;j++){
        char it=s[j];
        if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'){
            s[j]=z[i];
            i++;
        }

        }

        return s;
    }
};