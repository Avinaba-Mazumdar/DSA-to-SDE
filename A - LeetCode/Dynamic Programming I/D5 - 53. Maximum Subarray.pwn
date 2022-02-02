class Solution {
     public:int maxSubArray(vector<int> &nums) {
          int currSum=0, ans=INT_MIN, n=nums.size();
          for(int i=0; i<n; i++){
               currSum += nums[i];
               ans = max(ans, currSum);
               if(currSum < 0) currSum = 0;
          }
          return ans;
     }
};

TC: O(N)
SC: O(1)