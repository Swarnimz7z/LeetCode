class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> x;
        vector<int> y;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key)
            x.push_back(i);
        }
        int n=x.size();
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(abs(i-x[c])>k && i>x[c]){
                if(c<n-1)
                c++;

            }
            if(abs(i-x[c])<=k){
            y.push_back(i);
            }
        }
        return y;
    }
};