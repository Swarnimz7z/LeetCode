class Solution {
public:
    int XorSum(vector<int>& arr){
        int z=arr[0];
        for(int i=1;i<arr.size();i++){
            z=z^arr[i];
        }
        return z;
    }
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int x=XorSum(arr1);
        int y=XorSum(arr2);
        return x&y;
    }
};