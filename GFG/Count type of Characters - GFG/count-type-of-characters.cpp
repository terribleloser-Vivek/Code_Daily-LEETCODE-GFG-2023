//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
vector<int>v(4,0);

            for(int i=0;i<s.length();i++){

                char ch = s[i];

                if(ch>='a'&&ch<='z'){

                    v[1] = v[1]+1;

                }

                else  if(ch>='A'&&ch<='Z'){

                    v[0] = v[0]+1;

                }

                else  if(ch>='0'&&ch<='9'){

                    v[2] = v[2]+1;

                }

                else

                {

                    v[3]=v[3]+1;

                }

            }

            return v;        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends