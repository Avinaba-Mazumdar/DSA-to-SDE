class Solution {
     public:int maxScoreSightseeingPair(vector<int> &values) {
          int n = values.size();
          int maxi=values[0]+0, ans=0;
          
          for(int i=1; i<n; i++){
               ans = max(ans, maxi + values[i]-i);
               maxi = max(maxi, values[i]+i);
          }
          
          return ans;
     }
};

TC: O(N)
SC: O(1)