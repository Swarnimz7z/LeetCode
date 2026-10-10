class Solution {
public:
    int encrypt(int n){
        int max=0;
        string s="";
        int c=0;
        while(n!=0){
            if(n%10>max){
                max=n%10;
            }
            c++;
            n=n/10;
        }
        for(int i=0;i<c;i++){
            s=s+to_string(max);
        }
        return stoi(s);
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int s=0;
        for(auto it:nums){
            it=encrypt(it);
            s=s+it;
        }
    return s;
    }
};