#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     int rob(vector<int> &nums) {
          int n = nums.size();
          vector<int> memo(n, -1);
          return max(maxRobbed(nums, 0, n, memo), 
                    maxRobbed(nums, 1, n, memo));
     }
     
     private:
     int maxRobbed(vector<int> &nums, int idx, int n, vector<int> &memo){
          if(idx >= n) return 0;
          if(memo[idx] != -1) return memo[idx];
          
          return memo[idx] = max(maxRobbed(nums, idx+1, n, memo),
                                   maxRobbed(nums, idx+2, n, memo) + nums[idx]);
     }
};

int main(){
     Solution obj;
     vector<int> nums = {2,7,9,3,1};
     cout<<obj.rob(nums);
     
     return 0;
}

//TC: O(n)
//SC: O(n)