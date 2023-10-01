//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    const long long M = 1000000007; // modulo
map<long long, long long> F;

long long f(long long n) {
    if(F.count(n)) 
        return F[n];
    long long k=n/2;
    if (n%2==0) 
    { // n=2*k
        return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
    } 
    else 
    { // n=2*k+1
        return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
    }
}
    int countStrings(long long int N) {
        // Code here
        if(N==0)
            return 0;
        F[0]=F[1]=1;
        return f(N+1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int N;
        cin >> N;
        Solution obj;
        cout << obj.countStrings(N) << endl;
    }
}
// } Driver Code Ends