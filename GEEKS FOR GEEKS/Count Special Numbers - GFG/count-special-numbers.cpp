//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        int max=*max_element( begin(arr), end(arr) );     

        int count = 0;
        
        vector<int> hash(max + 1, 0);
        
        // sieve-technique
        for(int i=0; i<N; ++i) {
            if( hash[ arr[i] ] <= 1 ) {
                // mark arr[i] all multiples
                for(int j = arr[i]; j <= max; j+= arr[i]) {
                    hash[ j ]++;
                }
            }
        }
        
        for(int i=0; i<N; i++) {
            if(hash[ arr[i] ] > 1)
                count++;
        }
        
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends