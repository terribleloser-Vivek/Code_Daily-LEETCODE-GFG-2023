//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
           int n = s.size();
    string ans = "";
    for (int i = n - 1; i >= 0; i--) {
        string str = "";
        while (isdigit(s[i])) {
            str = s[i] + str;
            i--;
        }
        ans += str;
        if (!isdigit(s[i])) ans += s[i];
    }
    return ans;
    
    /* 
    reverse(s.begin(),s.end());
    cout << s << endl;
    return 0;
    */
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends