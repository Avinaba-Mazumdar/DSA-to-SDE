class Solution {
     public:int maxProfit(vector<int> &prices, int fee){
          int n = prices.size();
          int sellSt=0, keepSt=-prices[0];
          
          for(int i=1; i<n; i++){
               sellSt = max(sellSt, keepSt + prices[i] - fee);
               keepSt = max(keepSt, sellSt - prices[i]);
          }
          
          return sellSt;
     }
};

TC: O(N)
SC: O(1)