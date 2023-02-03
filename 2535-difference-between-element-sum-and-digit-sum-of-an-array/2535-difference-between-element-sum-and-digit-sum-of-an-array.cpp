class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int sum=accumulate(nums.begin(),nums.end(), 0);
        
       int dsum=0;
        for(auto& num:nums){
             while(num>0){
                dsum+=num%10;
                num=num/10;
            }
        }
        return abs(dsum-sum);
    }
};