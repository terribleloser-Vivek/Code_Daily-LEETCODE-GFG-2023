//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& a){
        int c=0;
        if(a[0]!=1&&a[1]!=1) {a[0]=1; c++;}
        for(int i=1;i<m-1;i++){
            if(a[i]!=1&&a[i-1]!=1&&a[i+1]!=1){
                a[i]=1;
                c++;
            }
         
        }
        if(a[m-1]!=1&&a[m-2]!=1){
            a[m-1]=1;
            c++;
        }
        if(c>=n)return true;
        else
        return false;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends