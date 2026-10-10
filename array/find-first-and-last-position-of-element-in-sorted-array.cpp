class Solution {
public:
    int FirstOccurence(vector<int>& nums,int target){
        int start=0;
        int n=nums.size();
        int end=n-1;
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                res=mid;
                end=mid-1;
            }
            else if(nums[mid]>target)
            end=mid-1;
            else{
                start=mid+1;
            }
        }
        return res;
    }
    int LastOccurence(vector<int>& nums,int target){
        int start=0;
        int n=nums.size();
        int end=n-1;
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                res=mid;
                start=mid+1;
            }
            else if(nums[mid]>target)
            end=mid-1;
            else{
                start=mid+1;
            }
        }
        return res;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> x;
        int y=FirstOccurence(nums,target);
        int z=LastOccurence(nums,target);
        x.push_back(y);
        x.push_back(z);
        return x;

    }
};