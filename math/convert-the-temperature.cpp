class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        ans.push_back(celsius+273.15);
        ans.push_back(1.80*celsius+32.00);
        return ans;
    }
};