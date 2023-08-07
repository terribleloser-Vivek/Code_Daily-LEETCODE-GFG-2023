class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
       int n=mat.size(), m=mat[0].size();
        int l=0, r=n*m-1;
        
        while(l <= r){
            int mid = l+(r-l)/2;
            int x = mat[mid/m][mid%m];
            
            if(x > target){
                r = mid-1;
            }else if(x < target){
                l = mid+1;
            }else{
                return true;
            }
        }
        return false; 
    }
};