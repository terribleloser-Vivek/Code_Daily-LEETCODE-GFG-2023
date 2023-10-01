//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        /*N --- 5 / 24 -2*2*2*3
      ans --- 1
      24 - 2 *  3   4
         - 12   4   4
      
      loop 1-N
       1 --- 5%1 == 0
       2 --- 5%2 != 0 --  NF
       3 --- 5%3 !=0 --- NF
       4 --- 5%4 !=0 --- NF
       5 --- 5%5==0 -- F
       
       array/vect --- > 1,5 
       vect max -- > 5
       5---> ans */
       
        long long int ans;
        int m=N;
        vector<int> an,prime;
        an.push_back(1);
        for(int i=2;i*i<=m;i++)
        {
            while(N%i == 0)
               { an.push_back(i);
                 N=N/i;
               }
        } 
        
        an.push_back(max(an[(an.size()-1)],N));
        
        
       return *max_element(an.begin(), an.end());
        
       
         
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