//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int n, int num, vector<int> &arr, vector<vector<int>> &Q) {
vector<vector<int>>freq(n+1,vector<int>(n+1,0));
        map<int,int>mp;
        
        for(int i=n-1;i>=0;i--)
        {
            mp[arr[i]]++;
            freq[i][mp[arr[i]]]++;
        }
        vector<int>ans;
        for(int i=0;i<num;i++)
        {
            int l = Q[i][0];
            int r = Q[i][1];
            int k = Q[i][2];
            
            int sum = 0;
            for(int i=l;i<=r;i++){
               sum += freq[i][k];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends