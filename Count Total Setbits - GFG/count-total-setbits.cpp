//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long countBits(long long N) {
        vector<int> setBitCount(N + 1, 0);
        long long res = 0;
        
        for(long long i = 1; i <= N; i++) {
            
            // odd case
            if(i & 1) 
                setBitCount[i] = setBitCount[i >> 1] + 1;
            
            // even case
            else
                setBitCount[i] = setBitCount[i >> 1];
            
            // storing count
            res += setBitCount[i];
            
        }
        
        return res;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends