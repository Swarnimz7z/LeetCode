class Solution {
public:
    int minimumPushes(string word) {
        int s=0;
        for(int i=0;i<word.length();i++){
            s+=i/8+1;
        }
        return s;
    }
};