class Solution {
     public:bool canJump(vector<int> &nums) {
          int n=nums.size(), jumps=0;
          for(int i=0; i<n; i++){
               if(jumps < i) return false;
               jumps = max(jumps, i+nums[i]);
          }
          return true;
     }
};

TC: O(N)
SC: O(1)