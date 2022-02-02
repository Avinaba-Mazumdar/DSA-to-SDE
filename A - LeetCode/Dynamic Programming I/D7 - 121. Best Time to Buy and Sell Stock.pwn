class Solution {
     public:int maxProfit(vector<int> &prices) {
          int ans=INT_MIN, init=prices[0];
          for(int &it : prices){
               if(it < init) init = it;
               else ans = max(ans, it - init);
          }
          return ans;
     }
};

TC: O(N)
SC: O(1)