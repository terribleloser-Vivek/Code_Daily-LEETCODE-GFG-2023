//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long solve(int n, vector<int> &a, vector<int> &b) {
        vector<int>oa;
        vector<int>ea;
        vector<int>ob;
        vector<int>eb;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0) ea.push_back(a[i]);
            else oa.push_back(a[i]);
            
            if(b[i]%2==0) eb.push_back(b[i]);
            else ob.push_back(b[i]);
        }
        
        if(oa.size()!=ob.size() || ea.size()!=eb.size()) return -1;
        
        sort(oa.begin(),oa.end());
        sort(ob.begin(),ob.end());sort(ea.begin(),ea.end());sort(eb.begin(),eb.end());
        
        long long count1=0,count2=0,c1=0,c2=0;
        for(int i=0;i<oa.size();i++)
        {
            
            count1+=(oa[i]-ob[i]);
            c1+=abs(oa[i]-ob[i])/2;
        }
        
        for(int i=0;i<ea.size();i++)
        {
            count2+=(ea[i]-eb[i]);
            c2+=abs(ea[i]-eb[i])/2;
        }
        
        return count1+count2==0?(c1+c2)/2:-1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends