class Solution {
public:
    int trailingZeroes(int n) {
        int x=0;
        for(int i=n;i>=1;i--){
            if(i%3125==0){
                x+=5;
            }
            else if(i%625==0){
                x+=4;
            }
            else if(i%125==0){
                x+=3;
            }
            else if(i%25==0){
                x+=2;
            }
            else if(i%5==0){
                x+=1;
            }
        }
        return x;
    }
};