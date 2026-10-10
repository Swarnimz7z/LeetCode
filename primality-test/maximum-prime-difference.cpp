class Solution {
public:
    bool prime(int n){
        int count=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
            count++;
            break;
            }
        }
        return count;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int x=0;
        int y=0;
        int r=0;
        int t=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>1 && !prime(nums[i]) && r==0){
            x=i;
            r++;
            }
            if(nums[n-i-1]>1 && !prime(nums[n-i-1]) && t==0){
            y=n-i-1;
            t++;
            }
            cout<<x<<","<<y<<endl;
            if(r!=0 && t!=0)
            break;
        }
        if(r+t<2){
            return 0;
        }
        return y-x;
    }
};