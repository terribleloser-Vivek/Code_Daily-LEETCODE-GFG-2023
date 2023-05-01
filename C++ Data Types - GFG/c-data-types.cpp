//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cppIntType() {
        // code here
        int n;
        cin>>n;
        return n;
    }
    
    char cppCharType() {
        // code here
        char ch;
        cin>>ch;
        return ch;
    }
    
    float cppFloatType() {
        // code here
        float f;
        cin>>f;
        return f;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }
    return 0;
}
// } Driver Code Ends