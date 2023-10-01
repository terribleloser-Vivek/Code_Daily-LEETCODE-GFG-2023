//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
          long long int mod = 1e9 + 7;
       sort(a,a+n);
       long long int sum = 0;
       for(long long int i=0; i<n; i++){ // don't forget to declare ‘i’ as ‘long long int’ because number of input is large in test cases
           sum += (i*a[i]) % mod;
    }
    return sum%mod;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends