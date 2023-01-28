//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

 /*
Question BreakDown - Scrambled String is made by swapping some of binary combinations as given in question. 
Question is not all about swapping. Brute Force approach that we think is to swap every binary tree combinations or not. But if we try to swap every adjancent. It will increase its time complexity. Since we are not swapping characters. Rather swapping substrings.
So, Binary tree breaking is possible at any index. There are two possibilities that my string is swapped or not.

Condn 1 - If string is swapped after breaking at any index. 
Let's say my string "human" and another scrambled string is "manhu"

Condn 2 - If string is not swapped after breaking at any index.
Let's say my string "human" and another scrambled string is "human"

Don't Just overthink now 🤔 that what if "man" or "hu" children will be swapped. That will be handled by recursion. Just keep faith and think about current situation.
So, Using these two condns , One can predict that I have to compare at ith index,
1) s1.substr(0,i) and s2.substr(n-i,i) AND  s1.substr(i,n-i) and s2.substr(0,n-i)
2) s1.substr(0,i) and s2.substr(0,i) AND  s1.substr(i,n-i) and s2.substr(i,n-i)  

Base Conditions : 
if s1==s2 return true

NOTE - Iterating through loop from 1-> n-1 so that another string not remain empty. Otherwise , it will go to infinite loop.
*/

//Back-end complete function Template for C++

class Solution{
    public:
    unordered_map<string,int> mp;
    bool isScramble(string S1, string S2){
   
   if(S1==S2) return true;
        
        string key=S1+"_"+S2;
        if(mp.find(key)!=mp.end()) return mp[key];
        
        int n=S1.length();
        bool flag=false;
        for(int i=1;i<n;i++) 
        {
            // condition 1
            if(isScramble(S1.substr(0,i),S2.substr(0,i)) && isScramble(S1.substr(i,n-i),S2.substr(i,n-i))) 
            {
                flag=true; 
                break;
            }
            // condition 2
            if(isScramble(S1.substr(0,i),S2.substr(n-i,i)) && isScramble(S1.substr(i,n-i),S2.substr(0,n-i)))
            {
                flag=true;
                break;
            }
        }
        string k=S1+"_"+S2;
        mp[k]=flag;
        return flag;
    }    
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;
        
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends