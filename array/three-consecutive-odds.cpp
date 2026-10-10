class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c=0;
        for(auto it:arr){
            if(it%2==1)
            c++;
            else
            c=0;
            if(c==3)
            return true;
        }
        return false;
    }
};