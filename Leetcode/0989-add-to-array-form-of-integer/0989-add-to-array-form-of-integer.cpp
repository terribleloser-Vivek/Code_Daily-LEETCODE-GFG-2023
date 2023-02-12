class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
     
     /* reverse(num.begin(),num.end());
     int number=0;
     for(int i=0;i<num.size();i++)
        {
            number=number*10+num[i];
        }*/
        for(int i=A.size()-1;i>=0&&K>0;i--)
 {
     A[i]+=K;
     K=A[i]/10;
     A[i]%=10;
 }
     while(K>0)
     {
         A.insert(A.begin(),K%10);
         K/=10;
     }
     return A;
    }
    
};