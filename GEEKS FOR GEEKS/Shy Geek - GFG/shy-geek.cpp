//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

class Shop
{
    vector<int> chocolates;
    int countOfCalls;
    public:
    Shop()
    {
        countOfCalls = 0;
    }
    void addChocolate(int x)
    {
        chocolates.push_back(x);
    }
    long long get(int i)
    {
        countOfCalls++;
        if(i<0 || i>=(int)chocolates.size() || countOfCalls>50)return -1;
        return chocolates[i];
    }
};


// } Driver Code Ends
//User function Template for Java

/*
Instructions - 

    1. 'shop' is object of class Shop.
    2. User 'shop.get(int i)' to enquire about the price
            of the i^th chocolate.
    3. Every chocolate in shop is arranged in increasing order
            i.e. shop.get(i) <= shop.get(i + 1) for all 0 <= i < n - 1
*/
class Solution{
    public:
    
    Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
    int binarySearch(long coins, int& e){
        int maxprice = -1;
        int s = 0;
        int mid = s + (e-s)/2;
        
        while(s <= e){
            int price = shop.get(mid);
            if(price <= coins){
                if(maxprice < price){
                    maxprice = price;
                }
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        
        return maxprice;
    }
    
    
    long long find(int n, long k){
        int first = shop.get(0);
        long long count = 0;
        int end = n-1;
        while(k >= first){
            int price = binarySearch(k, end);
            count+=((int)(k/price));
            k%=price;
        }
        return count;
    }

};

//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        long long k;
        cin >> k;
        
        Shop shop;
        for(int i = 0; i<n; i++)
        {
            int x;
            cin >> x;
            shop.addChocolate(x);
        }
        
        Solution obj(shop);
        long long res = obj.find(n, k);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends