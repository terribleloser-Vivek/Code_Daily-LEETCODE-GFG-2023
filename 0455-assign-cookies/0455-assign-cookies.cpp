class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        std::sort(g.begin(), g.end());   //  g ---> Greed Factor (i)
        std::sort(s.begin(), s.end());   //   s ---> size of Cookies (j)
        
        // if S[j] >= g[i] then it is true
        int contentChildren = 0;
        int cookieIndex = 0;
        while (cookieIndex < s.size() && contentChildren < g.size()) {
            if (s[cookieIndex] >= g[contentChildren]) {
                contentChildren++;
            }
            cookieIndex++;
        }
        return contentChildren;
    }
};