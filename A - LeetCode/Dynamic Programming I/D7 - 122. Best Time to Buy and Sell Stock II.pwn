class Solution {
     public:int maxProfit(vector<int> &prices){
          int n=prices.size(), i=1;
          int ans=0;
          
          while(i < n){
               while(i<n and prices[i]<prices[i-1]) i++;
               
               while(i<n and prices[i]>prices[i-1]){
                    ans += prices[i] - prices[i-1];
                    i++;
               }
               
               i++;
          }
          
          return ans;
     }
};

TC: O(N)
SC: O(1)