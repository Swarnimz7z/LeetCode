class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int a=0;
        int b=0;
        int c=0;
        int d=0;
        int x=-1;
        int y=-1;
        for(auto it:nums){
            if(it%2==0){
            a++;
            if(x==0){
                x=1;
                c++;
            }
            if(y==1){
                y=0;
                d++;
            }
            if(x==-1)
            {
                x=1;
                c++;
            }

            }
            if(it%2==1){
            b++;
            if(x==1){
                x=0;
                c++;
            }
            if(y==0){
                y=1;
                d++;
            }
            if(y==-1){
                y=1;
                d++;
            }
            }
        }
        return max(a,max(b,max(c,d)));
    }
};