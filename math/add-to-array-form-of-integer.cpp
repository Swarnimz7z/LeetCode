class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        long s=0;
        int c=0;
        for(int i=n-1;i>=0;i--){
            s=(num[i]+k%10+c)%10;
            c=(num[i]+k%10+c)/10;
            num[i]=s;
            k=k/10;
        }
        while(k!=0){
            s=(c+k%10)%10;
            c=(k%10+c)/10;
            num.insert(num.begin(),s);
            k=k/10;
        }
        if(c!=0){
            num.insert(num.begin(),c);
        }
        return num;
    }
};