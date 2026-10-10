class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        int n=instructions.size();
        long long s=0;
        for(int x=0;x<n && x>=0;){
            if(instructions[x]==" ")
            break;
            if(instructions[x]=="jump"){
            instructions[x]=" ";
            x=x+values[x];
            }
            else if(instructions[x]=="add"){
            s=s+values[x];
            instructions[x]=" ";
            x++;
            }
        }
        return s;
    }
};