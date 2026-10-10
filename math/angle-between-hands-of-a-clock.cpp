class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ans=0;
        
        double x=hour;
        double z=minutes;

        x=(hour%12)*30+(z/60)*30;
        z=(z/60)*360;
        if(x>=z)
        ans=x-z;
        else
        ans=z-x;

        return min(360-ans,ans);
    }
};