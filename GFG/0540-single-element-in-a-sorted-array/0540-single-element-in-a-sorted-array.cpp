class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0, end=nums.size()-2;
        while(end>=start){
            int mid = (end+start)/2;
            if(nums[mid] == nums[mid^1])
                start = mid+1;
            else
                end = mid-1;
        }
        return nums[start];
    }
};