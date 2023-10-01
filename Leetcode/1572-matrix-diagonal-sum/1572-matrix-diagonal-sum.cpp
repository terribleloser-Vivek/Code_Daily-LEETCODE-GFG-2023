class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
         int dsum=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                if(j+i==mat.size()-1||i==j)
                    dsum+=mat[i][j];
                
                
            }
        }
        return dsum;
    }
};