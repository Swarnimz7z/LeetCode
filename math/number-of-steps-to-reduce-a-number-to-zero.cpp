class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        while(num!=0){
            if(num%2!=0){
                num--;
                c++;
            }
            else{
                c++;
                num=num/2;
            }
        }
        return c;
    }
};