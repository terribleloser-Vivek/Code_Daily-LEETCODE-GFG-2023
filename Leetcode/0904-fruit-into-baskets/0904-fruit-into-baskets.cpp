class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int n = fruits.size() ,ans=0 ,i=0, j=0;
       
       unordered_map<int,int>mp;
       
       while(j<n){
         // Insert fruits in basket (map) 
           mp[fruits[j]]++;
         // If our basket i.e map size is greater than 2 then we need to remove the fruit 
           while(mp.size()>2){
               mp[fruits[i]]--;
         // If frequency of any fruit equals to zero then erase element from our map     
               if(mp[fruits[i]]==0) mp.erase(fruits[i]);
               i++;
           }
         // Store maximum size of window
           ans = max(ans,j-i+1);
           j++;
       }
       return ans;
    
    }
};