//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        int re=-1;

        int me=n+1;

        int *ans=new int[2];

        //for finding REPEATING ELEMENT------

        for(int i=0;i<n;i++){

            //this implies element already exists!

            if(arr[abs(arr[i])-1]<0){

                re=abs(arr[i]);

            }

            //turning the element negative if it does not exist

           else arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];

            

        }

        

        //for finding MISSING ELEMENT------

        for(int i=0;i<n;i++){

            //index+1 of the only positive element left will be our answer

            if(arr[i]>=0)me=i+1;

        }

        ans[0]=re;ans[1]=me;

        return ans;
        
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends