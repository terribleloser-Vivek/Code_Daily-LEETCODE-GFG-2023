class Solution {
public:
    
        vector<int> leftRigthDifference(vector<int>& nums) {
    vector<int> res, ps(nums.size() + 1);
    partial_sum(begin(nums), end(nums), begin(ps) + 1);
    for (int i = 0; i < nums.size(); ++i)
        res.push_back(abs(ps.back() - ps[i + 1] - ps[i]));
    return res;
    }
    
};