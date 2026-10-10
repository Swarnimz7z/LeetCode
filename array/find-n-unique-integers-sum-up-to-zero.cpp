class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> z;
        int min=0-n/2;
        int max=0+n/2;
        for(int i=min;i<=max;i++){
            if(n%2==0){
                if(i==0){
                    continue;
                }
            }
            z.push_back(i);
        }
        return z;
    }
};