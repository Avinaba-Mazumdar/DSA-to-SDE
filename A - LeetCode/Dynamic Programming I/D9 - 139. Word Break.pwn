class Solution {
     public:bool wordBreak(string s, vector<string> &wordDict) {
          int n = s.size();
          vector<bool> dp(n, false);
          dp[0] = true;
          
          for(int start=0; start<n; start++){
               if(dp[start]){
                    for(string word : wordDict){
                         int end = start + word.size() - 1;
                         if(end<n and s.substr(start, word.size())==word){
                         if(end == n-1) return true;
                         dp[end + 1] = true;
                         }
                    }
               }
          }
          
          return false;
     }
};

TC: O(N)
SC: O(1)