class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int index,min=prices[0],Profit=0;
        
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<min)
            { 
                min=prices[i];
            }
            
            if(Profit<prices[i]-min)
            { 
                Profit=prices[i]-min;                
            }
            
        }
        
           
      
        
        return Profit;  
    }
};