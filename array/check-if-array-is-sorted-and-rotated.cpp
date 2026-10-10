class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int> a=nums;
        int j=0;
        int x=0;
        for(int i=0;i<n-1;i++){
            if(a[i]<=a[i+1]){
                continue;
            }
            else{
                j=i+1;
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[j%n]>a[((j+1)%n)]){
                x=0;
                break;
            }
            else{
                j++;
                x=1;
            }
        }
        if(n==1){
            x=1;
        }
        return x;
        
    }
};