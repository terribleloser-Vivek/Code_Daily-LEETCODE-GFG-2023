class Solution {
public:
    vector<int> grayCode(int n) {
      int cnt=1;
        vector<int>v;
        v.push_back(0);
        v.push_back(1);
        for(int i=1; i<n; i++){
            cnt*=2;
            int l=v.size();
            for(int j=l-1; j>=0; j--){
                v.push_back(v[j]+cnt);
            }
        }
        return v;  
    }
};