class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int s=0;
        for(int i=max(100,num1);i<=num2;i++){
            int m=i;
            int prev=i%10;
            int curr=(i/10)%10;
            m=m/10;
            while(m/10!=0){
                m=m/10;
                int next=m%10;

                if((prev<curr && curr>next)||(prev>curr && curr<next))
                s++;

                prev=curr;
                curr=next;
            }
        }
        return s;
    }
};