class Solution {
public:
    int sum(int n){
        int s=0;
        while(n!=0){   
            s=s+n%10;
            n=n/10;
        }
        return s;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> z;
        for(int i=lowLimit;i<=highLimit;i++){
            int x=sum(i);
            z[x]+=1;
        }
        int max=0;
        for(auto it:z){
            if(it.second>=max){
                max=it.second;
            }
        }
        return max;
    }
};