class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
    
  vector<bool> answer;
    int max = *max_element(candies.begin(),candies.end());

    for(int &c : candies)
        if(c + extra >= max)
            answer.push_back(true);
        else
            answer.push_back(false);

    return answer;;
        
        
    }
};