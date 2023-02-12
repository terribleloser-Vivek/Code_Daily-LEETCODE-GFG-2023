class Solution {
public:
          
        int tribonacci(int n)
    {
        /* if(n < 2)   return n;
           if(n == 2)  return 1;
           return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);     // TLE
        */
      
        int zeroth = 0, first = 1, second = 1, res;
        if(n < 2)       return n;
        if(n == 2)      return 1;
        for(int i = 3; i <= n; i++){
            res = zeroth + first + second;
            zeroth = first;
            first = second;
            second = res;
        }
        return res;
            
            
        
    }
};