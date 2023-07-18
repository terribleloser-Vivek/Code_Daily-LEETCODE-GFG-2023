//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    int n=str.size();
            vector<vector<int>> a(n+1,vector<int>(n+1,0));
            for(int i=n-1;i>=0;i--){
                for(int j=n-1;j>=0;j--){
                    int k,l;
                    k=a[i+1][j];
                    l=a[i][j+1];
                    
                    int c=0;
                    if(i!=j && str[i]==str[j])
                    c=1+a[i+1][j+1];
                    
                    a[i][j]=max({k,l,c});
                }
            }
            return a[0][0];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends