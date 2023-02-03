class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      int length = nums.size();
        map <int, int> mp;
        vector <int> numsSorted = nums;
        sort(numsSorted.begin(), numsSorted.end());

        for(int i = length-1; i >=0; i--){
            mp[numsSorted[i]] = i;
        }
        for(int i = 0; i < length; i++){
            nums[i] = mp[nums[i]];
        }
        return nums;
        
        
    }
};