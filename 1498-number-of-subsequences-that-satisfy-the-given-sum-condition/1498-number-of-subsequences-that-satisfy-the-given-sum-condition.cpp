class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int mod=1000000007,l=0,r=nums.size()-1,ans=0,n=nums.size();
        vector<int> v(n,1);
        for(int i=1;i<n;i++){
            v[i] = (v[i-1] * 2) % mod;
        }
        sort(nums.begin(),nums.end());
        while(l<=r){
            if(nums[l]+nums[r]>target) r--;
            else{
                ans=(ans+v[r-l++]) % mod;
            }
        }
        return ans;
    }
};