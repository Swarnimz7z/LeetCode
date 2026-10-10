class Solution {
public:
    bool IsTriangle(vector<int> &sides){
        if(sides[0]+sides[1]<=sides[2] || sides[1]+sides[2]<=sides[0] || sides[0]+sides[2]<=sides[1])
        return false;

        return true;
    }
    vector<double> internalAngles(vector<int>& sides) {
        vector<double> x;
        sort(sides.begin(),sides.end());

        if(!IsTriangle(sides))
        return x;
        
        x={(double)sides[0],(double)sides[1],(double)sides[2]};

        double A=acos((x[1]*x[1]+x[2]*x[2]-x[0]*x[0])/(2*x[1]*x[2]))*180.0/M_PI;
        double B=acos((x[0]*x[0]+x[2]*x[2]-x[1]*x[1])/(2*x[0]*x[2]))*180.0/M_PI;
        double C=acos((x[0]*x[0]+x[1]*x[1]-x[2]*x[2])/(2*x[0]*x[1]))*180.0/M_PI;

        x={A,B,C};

        sort(x.begin(),x.end());
        return x;
    }
};