class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
     int ans=0;
        for(auto it : sentences)
        {
            int sum=0;
            for(auto iterator : it){
                if(iterator==' ')
                sum++;
            }
            ans=max(ans,sum+1);
        }
    return ans;
  }
};