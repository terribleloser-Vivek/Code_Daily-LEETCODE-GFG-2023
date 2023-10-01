//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int solve(int ind,int rod_length,int n,int price[], vector<vector<int>>&dp){
         if(ind>n){
           return 0;
       }
       if(dp[ind][rod_length]!=-1)return dp[ind][rod_length];
       int notpick=0+solve(ind+1,rod_length,n,price,dp);
       int pick=-1e9;
       if(rod_length>=ind){
           pick=price[ind-1]+solve(ind,rod_length-ind,n,price,dp);
       }
       return dp[ind][rod_length]=max(pick,notpick);
   }
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(1,n,n,price,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends