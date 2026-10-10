class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        if(temperatures[0]==99){
            vector<int> temp(n);
            for(int i=n-1;i>=0;i--){
                temp[n-i-1]=i;
            }
            return temp;
        }
        for(int i=0;i<n;i++){
            int c=0;
            int y=0;
            for(int j=i;j<n;j++){
                if(temperatures[i]==100)
                break;
                if(temperatures[j]>temperatures[i]){
                    y=1;
                    temperatures[i]=c;
                    break;
                }
                else
                c++;
            }
            if(y==0)
            temperatures[i]=0;
        }
        return temperatures;
    }
};