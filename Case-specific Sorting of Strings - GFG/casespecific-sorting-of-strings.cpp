//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
       int j=0,k=0;
        string s="";
        vector<char>s1,s2; //Vector to store lowercase and uppercase individually

        for(int i=0;i<n;i++){

            if(isupper(str[i])){

                s1.push_back(str[i]); //store upper case characters

            } else {

                s2.push_back(str[i]); //store lower case characters

            }

        }
//Sort both the vectors
        sort(s1.begin(),s1.end()); 
        sort(s2.begin(),s2.end());
        
        for(int i=0;i<n;i++){
            if(isupper(str[i])){
                s+=s1[j];
                j++;
            } 
            else {
                s+=s2[k];
                k++;
            }
        }

        return s;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends