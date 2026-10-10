class Solution {
public:
    int Land(int s,vector<int>&landStartTime,vector<int>&landDuration){
        int n=landStartTime.size();
        int x=INT_MAX;
        for(int i=0;i<n;i++){
            if(landStartTime[i]>s)
            x=min(x,landStartTime[i]+landDuration[i]);
            else
            x=min(x,s+landDuration[i]);
        }
        return x;
    }

    int Water(int s,vector<int>&waterStartTime,vector<int>&waterDuration){
        int m=waterStartTime.size();
        int x=INT_MAX;
        for(int i=0;i<m;i++){
            if(waterStartTime[i]>s)
            x=min(x,waterStartTime[i]+waterDuration[i]);
            else
            x=min(x,s+waterDuration[i]);
        }
        return x;
    }

    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
      
        int x=Land(0,landStartTime,landDuration);
        int y=Water(x,waterStartTime,waterDuration);

        int a=Water(0,waterStartTime,waterDuration);
        int b=Land(a,landStartTime,landDuration);

        return min(y,b);
    }
};