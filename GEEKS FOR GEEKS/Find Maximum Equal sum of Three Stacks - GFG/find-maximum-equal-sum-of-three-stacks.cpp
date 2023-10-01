//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int sum1 = 0,sum2 = 0,sum3 = 0;
        for(int i=0;i<N1;i++) 
            sum1 += S1[i];
        for(int i=0;i<N2;i++) 
            sum2 += S2[i];
        for(int i=0;i<N3;i++) 
            sum3 += S3[i];
            
        int t1 = 0,t2 = 0,t3 = 0;
        int mini = min(sum1,min(sum2,sum3));
        while((sum1 != sum2) or (sum2 != sum3))
        {
            if(sum1 != mini and t1 < N1)
            {
                sum1 -= S1[t1];
                t1++;
            }
            if(sum2 != mini and t2 < N2)
            {
                sum2 -= S2[t2];
                t2++;
            }
            if(sum3 != mini and t3 < N3)
            {
                sum3 -= S3[t3];
                t3++;
            }
            mini = min(sum1,min(sum2,sum3));
        }
        return sum1;  
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends