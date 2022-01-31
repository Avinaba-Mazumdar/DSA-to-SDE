class Solution {
     public:
     int minCostClimbingStairs(vector<int> &cost) {
          int n = cost.size();
          vector<int> memo(n, -1);
          return min(minCost(cost, 0, n, memo), minCost(cost, 1, n, memo));
     }
     
     private:
     int minCost(vector<int> &cost, int idx, int n, vector<int> &memo){
          if(idx >= n) return 0;
          if(memo[idx] != -1) return memo[idx];
          
          return memo[idx] = min(minCost(cost, idx+1, n, memo),
                                   minCost(cost, idx+2, n, memo)) + cost[idx];
     }
};

//TC: O(N)
//SC: O(n)