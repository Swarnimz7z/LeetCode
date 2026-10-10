class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> s;
        int x=0;
        for(int i=left;i<=right;i++){
            int m=i;
            int c=0;
            while(m!=0){
                if(m%10!=0){
                if(i%(m%10)!=0){
                    c++;
                    break;
                }
                }
                else{
                    c++;
                    break;
                }
                m=m/10;
            }
            if(c==0){
                s.push_back(i);
                x++;
            }
        }
        return s;
    }
};