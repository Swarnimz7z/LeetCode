class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> x;
        for(int i=1;i<n;i++){
            int z=n-i;
            int c=0;
            while(z!=0){
                int m=z%10;
                if(m==0){
                c=1;
                break;
                }
                z=z/10;
            }
            z=i;
            while(z!=0){
                int m=z%10;
                if(m==0){
                c=1;
                break;
                }
                z=z/10;
            }
            if(c==0){
                x.push_back(i);
                x.push_back(n-i);
                return x;
            }
        }
        return x;
    }
};