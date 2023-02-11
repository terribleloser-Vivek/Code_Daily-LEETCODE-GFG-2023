class Solution {
public:
    vector<double> convertTemperature(double Celsius) {
         
        vector<double>ans;
        ans.push_back(Celsius + 273.15);
        ans.push_back(Celsius * 1.80 + 32.00);
    return ans;
    }
};