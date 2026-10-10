class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x=0;
        int i=0;
        int j=0;
        vector<int> nums=nums1;
        if(n==0){
            i=0;
        }
        else{
        while(x<m+n){
            if(i==m){
                nums1[x]=nums2[j];
                x++;
                j++;
                continue;
            }
            if(j==n){
                nums1[x]=nums[i];
                x++;
                i++;
                continue;
            }
            if(nums[i]<=nums2[j]){
                nums1[x]=nums[i];
                i++;
                x++;
            }
            else{
                nums1[x]=nums2[j];
                j++;
                x++;
            }
        }
        }
    }
};