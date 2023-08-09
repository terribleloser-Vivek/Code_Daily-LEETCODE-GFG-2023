//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
       long long ans=1;
        int m=N;
        for(int i=2;i*i<=m;i++)
        {
            while(N%i==0)
            {
                ans=i;
                N=N/i;
            }
        }
        // ans=max(ans,N);
        ans=(ans>N)?ans:N;
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends