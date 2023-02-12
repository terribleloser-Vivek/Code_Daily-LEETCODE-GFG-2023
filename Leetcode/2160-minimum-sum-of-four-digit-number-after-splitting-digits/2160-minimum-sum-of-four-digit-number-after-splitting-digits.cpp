class Solution {
public:
    int minimumSum(int num) {
       vector<int>digit;
       while(num>0){
           digit.push_back(num%10);
           num/=10;
       } 
       sort(digit.begin(),digit.end());
       return (digit[0]*10+digit[3])+(digit[1]*10+digit[2]);
    }
};