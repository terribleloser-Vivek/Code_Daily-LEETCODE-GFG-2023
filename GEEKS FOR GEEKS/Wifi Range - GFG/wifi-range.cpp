//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int x){
    int flag=0;
        bool first=true;
        for(int i=0;i<N;i++){
            if(S[i]=='1' && first){
                flag=i;
                if((i-x)>0)return false;
                first=false;
            }
            else if(S[i]=='1'){
                if((i-x)>(flag+x+1)){
                    return false;
                }
                flag=i;
            }
            
        }
        if((flag+x+1)<N)return false;
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends