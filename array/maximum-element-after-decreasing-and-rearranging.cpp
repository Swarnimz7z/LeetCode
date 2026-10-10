class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int x=1;
        arr[0]=1;
        int n=arr.size();
        
        for(int i=0;i<n-1;i++){
            if(arr[i+1]>arr[i]){
                arr[i+1]=arr[i]+1;
                x=arr[i+1];
            }
        }
        
        return x;
    }
};