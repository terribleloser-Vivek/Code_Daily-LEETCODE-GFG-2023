//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    queue<char> q;
            vector<int> v(26,0);
            
            v[A[0]-'a']++;
            q.push(A[0]);
            
            string ans="";
            ans+=A[0];
            int n=A.size();
            
            for(int i=1; i<n; i++)
            {
                v[A[i]-'a']++;
                if( v[A[i]-'a'] == 1)q.push(A[i]);
                if(q.empty())ans+='#';
                else{
                    while(!q.empty() && v[q.front()-'a']!=1)q.pop();
                    
                    if(q.empty())ans+='#';
                    else ans+=q.front();
                }
            }
            return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends