class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> z;
        int x=0;
        int y=0;
        for(auto it:s){
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'){
            z[it]++;
            if(z[it]>x)
            x=z[it];
            }
            else{
                z[it]++;
                if(z[it]>y)
                y=z[it];
            }
        }
        return x+y;
    }
};