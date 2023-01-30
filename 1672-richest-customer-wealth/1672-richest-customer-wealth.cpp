class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       
        int maximum = INT_MIN;

        for(int i=0;i<accounts.size();i++){
            int sum =0 ;
            for(int j=0;j<accounts[0].size();j++){
                sum += accounts[i][j];
            }
            maximum = max(maximum,sum);
        }
        return maximum;
        
    }
};