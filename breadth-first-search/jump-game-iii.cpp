class Solution {
public:
    vector<int> z;
    bool x=0;
    void Check(vector<int>& arr,int i){
        if(i<0||i>=arr.size()||z[i]==-1||x)
        return;
        if(arr[i]==0){
            x=1;
            return;
        }
        z[i]=-1;

        Check(arr,i+arr[i]);

        Check(arr,i-arr[i]);

    }
    bool canReach(vector<int>& arr, int start) {
        z=arr;
        Check(arr,start+arr[start]);

        Check(arr,start-arr[start]);
        return x;
    }
};