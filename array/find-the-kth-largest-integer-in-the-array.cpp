class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),[](string a,string b){
            if(a.length()==b.length()){
                for(int i=0;i<a.length();i++){
                if(a[i]==b[i])
                continue;
                return a[i]>b[i];
                }
            }
            return a.length()>b.length();
        });
        for(auto it:nums){
            cout<<it<<endl;
        }
        return nums[k-1];
    }
};