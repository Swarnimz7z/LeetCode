class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int> z;
        int n=arr.size();
        int min=1;
        int index=0;
        int max=arr[n-1];
        int i=0;
        while(i<n){
            if(index==k){
                break;
            }
            if(min==arr[i]){
                i++;
                min++;
            }
            else{
                min++;
                index++;
            }
        }
        if(index<k){
            min=max+k-index;
        }else{
            min--;
        }
        return min;

    }
};