class Solution {
     public:int maxProfit(vector<int> &prices) {
          int n = prices.size();
          int sell=0, prevSell=0, buy=INT_MIN, prevBuy;
          
          for(int price : prices){
               prevBuy = buy;
               buy = max(buy, prevSell - price);
               
               prevSell = sell;
               sell = max(sell, prevBuy + price);
          }
          
          return sell;
     }
};

TC: O(N)
SC: O(1)