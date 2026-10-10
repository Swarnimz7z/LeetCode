class Solution {
public:
    void rightshift(vector<int>& arr,int x){
        int n=arr.size();
        for(int i=n-1;i>x;i--){
            arr[i]=arr[i-1];
        }
    }
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i]==0){
            rightshift(arr,i);
            i++;
            }
        }
    }
};