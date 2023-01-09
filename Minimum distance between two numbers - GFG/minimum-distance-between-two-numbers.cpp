//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
       vector<int> v;

        vector<int> s;

        int p = 0;

        int l = 0;

        for(int i = 0;i < n;i++)

        {

            if(a[i] == x)

            {

                p++;

                v.push_back(i);

            }

            if(a[i] == y)

            {

                l++;

                s.push_back(i);

            }

        }

        if(l == 0 || p == 0)

        {

            return -1;

        }

        sort(v.begin(),v.end());

        sort(s.begin(),s.end());

        int i = 0;

        int j = 0;

        int smin = INT_MAX;

        for(int i = 0;i < p;i++)

        {

            for(int j = 0;j < l;j++)

            {

                if(v[i] < s[j])

                smin = min(smin,s[j] - v[i]);

                if(s[j] < v[i])

                smin = min(smin,v[i] - s[j]);

            }

        }

        return smin;

    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends