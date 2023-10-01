//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
int N=n;
        while(N>0){
        int p=n;
        while(p>0)
        {
            for(int i=1;i<=N;i++)
            {
                cout<<p<<" ";
            
            }
            p--;
        }
            cout<<"$";
            
            N--;
        
        }
}