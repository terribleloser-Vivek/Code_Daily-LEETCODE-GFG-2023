class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n = (ruleKey == "type" ? 0 : (ruleKey == "color" ? 1 : 2)), c = 0;
        for(int i = 0; i < items.size(); i++){
            if(items[i][n] == ruleValue)
                c++;
        }
        return c;
    }
};