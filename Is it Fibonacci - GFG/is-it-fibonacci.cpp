//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        if(N<=GeekNum.size()) return GeekNum[N-1];

        long long leftSum=0,rightSum=accumulate(GeekNum.begin(),GeekNum.end(),0);

        long long leftInd=0,rightInd;

        for(int rightInd=GeekNum.size();rightInd<=N;rightInd++)

        {

            //rightSum-leftSum=sum of the window

            GeekNum.push_back(rightSum-leftSum);

            //increment rightSum by adding newly created number

            rightSum+=GeekNum[rightInd];

            //increment left by 1 and also increment leftSum

            leftSum+=GeekNum[leftInd++];

        }

        return GeekNum[N-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends