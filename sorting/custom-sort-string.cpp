class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> z;
        string x="";
        string y="";
        for(auto it:s){
        z[it]++;
        if(order.find(it)>order.length())
        y=y+it;
        }
        for(auto it:order){
            if(z[it]!=0){
            int i=0; 
            while(i!=z[it]){
                x=x+it;
                i++;
            }
            }
        }
        return x+y;;
    }
};