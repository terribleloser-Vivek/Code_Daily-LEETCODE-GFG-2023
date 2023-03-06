//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {
       
       vector<int> binary;
      
       while (n > 0) {
         // storing remainder in binary array
            binary.push_back(n % 2) ;
            n = n / 2;
        }
 
       reverse(binary.begin(),binary.end());
       
       // check if three consecutive ones are there then make last 1 to zero
        int c = 0;
        n = binary.size();
        int i=0;
        while(i<n)
        {
            if(binary[i]==1) c++;
            else c=0;
            if(c==3)
            {
                binary[i] = 0;
                c = 0;
            }
            i++;
        }
              
        // reform the number to integer 

        n = 0;
        for(auto &x:binary)
        {
            n<<=1;
            n+=x;
        }
        return n;
       
       
       
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends