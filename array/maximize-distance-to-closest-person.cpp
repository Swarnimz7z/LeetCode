class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        vector<int> x;
        vector<int> y;
        int max=1;
        for(int i=0;i<n;i++){
            if(seats[i])
            x.push_back(i);
            else
            y.push_back(i);
        }
        for(int i=0;i<y.size();i++){
            int z=n+1;
            for(int j=0;j<x.size();j++){
                z=min(z,abs(y[i]-x[j]));
            }
            if(z>=max)
            max=z;
        }
        return max;
    }
};