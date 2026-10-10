class Solution {
public:
    void Traverse(string &digits,int z,string s,vector<string> &x,unordered_map<char,string> v){
        if(z==digits.length()){
            x.push_back(s);
        return;
        }
        string y=v[digits[z]];
        for(auto it:y)
        Traverse(digits,z+1,s+it,x,v);

    }
    vector<string> letterCombinations(string digits) {
        vector<string> x;
        if(digits.length()==0)
        return x;
        unordered_map<char,string> v;
        v.insert({'2',"abc"});
        v.insert({'3',"def"});
        v.insert({'4',"ghi"});
        v.insert({'5',"jkl"});
        v.insert({'6',"mno"});
        v.insert({'7',"pqrs"});
        v.insert({'8',"tuv"});
        v.insert({'9',"wxyz"});
        Traverse(digits,0,"",x,v);
        return x;
    }
};