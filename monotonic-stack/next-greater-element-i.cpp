class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int> res(n,0);
        vector<int> resz;
        stack<int> x;
        x.push(nums2[n-1]);
        res[n-1]=-1;
        for(int i=n-2;i>=0;i--){
            while(x.top()<nums2[i]){
                x.pop();
                if(x.empty())
                break;
            }
            if(x.empty()){
                res[i]=-1;
                x.push(nums2[i]);
            }
            else{
                res[i]=x.top();
                x.push(nums2[i]);
            }
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j]){
                    resz.push_back(res[j]);
                    break;
                }
            }
        }
        return resz;
    }
};