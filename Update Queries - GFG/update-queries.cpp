//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        vector<int> updateQuery(int n,int Q,vector<vector<int>> &q)
        {
            int v[n+1][20];
            memset(v, 0, sizeof(v));
            
            for(auto a : q){
                for(int bit = 0; bit < 20; ++bit){
                    v[a[0]-1][bit] += ((a[2]>>bit)&1);
                    v[a[1]][bit] -= ((a[2]>>bit)&1);
                }
            }
            
            vector<int> a(n);
            for(int bit = 0; bit < 20; ++bit){
                for(int i = 0; i < n; ++i){
                    if(i)v[i][bit] += v[i-1][bit];
                    a[i] += (1<<bit)*(v[i][bit]>0);
                }
            }
            
            return a;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector <vector <int>> u(q,vector <int>(3));
        for(int i=0;i<q;i++)
            cin>>u[i][0]>>u[i][1]>>u[i][2];
        Solution a;
        vector <int> ans=a.updateQuery(n,q,u);//<<endl;
        for(auto j:ans)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends