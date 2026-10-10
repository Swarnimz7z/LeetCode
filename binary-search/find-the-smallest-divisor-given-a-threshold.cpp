class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max=INT_MIN;
        int z=0;
        for(auto it:nums)
        if(it>max)
        max=it;
        int low=1;
        int high=max;
        while(low<=high){
            int sum=0;
            double mid=(low+high)/2;
            for(auto it:nums){
                sum=sum+ceil(it/mid);
            }
            if(sum>threshold){
                low=mid+1;               
            }
            else{
                high=mid-1;
                z=mid;
            }
        }
        return z; 
    }
};