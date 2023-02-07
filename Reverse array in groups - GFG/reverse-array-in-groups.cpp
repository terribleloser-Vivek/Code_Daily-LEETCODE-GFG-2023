//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
   
        vector<long long>v;
        int i , j , x = 1;
        int m = n - (n%k) ;
        if ( k > n )
        {
            for ( int i = n-1 ; i >= 0 ; i-- )
                v.push_back(arr[i]);
            arr = v;
        }
        for ( i = 0 ; i < m ; i+=k )
        {
            for ( j = (x*k)-1 ; j >= i ; j-- )
                v.push_back(arr[j]);
            x++;
        }
        for (int y = n-1 ; y >= m ; y-- )
            v.push_back(arr[y]);
        arr = v;
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends