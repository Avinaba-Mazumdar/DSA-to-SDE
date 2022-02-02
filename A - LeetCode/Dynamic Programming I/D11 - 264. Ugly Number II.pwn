class Solution {
     public:int nthUglyNumber(int n) {
          vector<int> dp(n);
          dp[0] = 1;
          int p2=0, p3=0, p5=0;
          
          for(int i=1; i<n; i++){
               int mulOf2 = dp[p2] * 2;
               int mulOf3 = dp[p3] * 3;
               int mulOf5 = dp[p5] * 5;
               
               dp[i] = min({mulOf2, mulOf3, mulOf5});
               
               if(dp[i] == mulOf2) p2++;
               if(dp[i] == mulOf3) p3++;
               if(dp[i] == mulOf5) p5++;
          }
          
          return dp[n-1];
     }
};

TC: O(N)
SC: O(N)