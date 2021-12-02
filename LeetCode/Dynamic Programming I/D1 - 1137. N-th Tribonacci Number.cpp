#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     int tribonacci(int n) {
          vector<int> dp(3);
          
          dp[0] = 0;
          dp[1] = 1;
          dp[2] = 1;
          
          for(int i=3; i<=n; i++)
               dp[i%3] = dp[1] + dp[2] + dp[0];
          
          return dp[n%3];
     }
};

int main(){
     Solution obj;
     cout<<obj.tribonacci(25)<<endl;
     
     return 0;
}

//TC: O(n)
//SC: O(1)