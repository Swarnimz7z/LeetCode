class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> x;
        for(int i=1;i<=9;i++){
            int s=0;
            for(int j=i;j<=9;j++){
                s=s*10+j;
                if(s>=low && s<=high)
                x.push_back(s);
            }
        }
        sort(x.begin(),x.end());
        return x;
    }
};