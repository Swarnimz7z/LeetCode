class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=INT_MIN;
        int z=0;
        for(auto it:piles)
        if(it>max)
        max=it;
        int low=1;
        int high=max;
        while(low<=high){
            long long sum=0;
            double mid=(low+high)/2;
            for(auto it:piles){
                sum=sum+ceil(it/mid);
            }
            if(sum>h){
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