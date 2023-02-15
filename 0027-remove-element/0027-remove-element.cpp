class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
     int k {};
        for(int i {}; i<nums.size();i++){
                (nums[i]!=val) ? nums[k++]=nums[i]:NULL;
        }
        return k;
     
        
    }
};