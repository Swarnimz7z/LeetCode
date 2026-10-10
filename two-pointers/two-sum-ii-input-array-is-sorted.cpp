class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int z=-1;   
        vector<int> v;
        for(int i=0;i<n-1;i++){
            int x=target-numbers[i];
            int low=i+1;
            int high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(numbers[mid]==x){
                    z=mid;
                    break;
                }
                if(numbers[mid]<x)
                low=mid+1;
                else
                high=mid-1;
            }
            if(z!=-1){
                v.push_back(i+1);
                v.push_back(z+1);
                break;
            }
        }
        return v;
    }
};