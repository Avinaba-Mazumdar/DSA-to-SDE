class Solution {
     public:
     int maxProfit(vector<int> &prices) {
          int ans=0, buyCost=prices[0];
          
          for(int it : prices){
               if(it < buyCost) buyCost = it;
               else ans = max(ans, it - buyCost);
          }
          
          return ans;
     }
};

//TC: O(N)
// SC: O(1)