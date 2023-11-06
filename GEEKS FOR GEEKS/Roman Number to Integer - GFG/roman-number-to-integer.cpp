//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
         
         // if it is IV then I is before V means you need to subtract
         unordered_map<char,int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int n = str.size();
        int res = 0;
        for(int i=n-1;i>=0;i--){
            if(i<n-1 && m[str[i+1]] > m[str[i]])
                res -= m[str[i]];
            else
                res += m[str[i]];
        }
        return res;
        
           /*  switch(str[i])
             {
                 case 'I':
                        if(str[i+1]=='V') { num-=1; break;  }
                        else {num+=1; break; }
                 case 'V':
                    if(str[i+1]=='V') { num-=1; break;  }
                    else { num+=5; break; }
                 case 'X':
                    if(str[i+1]=='V') { num-=1; break;  }
                    else { num+=10; break; }
                 case 'L':
                    if(str[i+1]=='V') { num-=50; break;  }
                    else { num+=50; break; }
                 case 'C':
                    if(str[i+1]=='V') { num-=100; break;  }
                    else { num+=100; break; }
                 case 'D':
                    if(str[i+1]=='V') { num-=500; break;  }
                    else { num+=500; break; }
                 case 'M':
                    if(str[i+1]=='V') { num-=1000; break;  }
                    else { num+=1000; break; }
             }
             */
         
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends