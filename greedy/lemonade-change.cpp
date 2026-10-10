class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> z={0,0,0};
        for(auto it:bills){
            if(it==5)
            z[0]+=1;
            if(it==10){
                z[0]-=1;
                if(z[0]<0)
                return 0;
                z[1]+=1;
            }
            if(it==20){
                if(z[1]>0){
                z[0]-=1;
                if(z[0]<0)
                return 0;
                z[1]-=1;
                }
                else{
                z[0]-=3;
                    if(z[0]<0)
                    return 0;
                }
                z[2]+=1;
            }
        }
        return 1;
    }
};