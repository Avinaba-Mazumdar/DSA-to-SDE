class Solution {
     public:
     int rob(vector<int> &nums) {
          if(nums.size()== 1) return nums[0];
          if(nums.size() == 2) return max(nums[0], nums[1]);
          
          vector<int> one(begin(nums), end(nums)-1);
          vector<int> two(begin(nums)+1, end(nums));
          
          return max(robTheHouse(one), robTheHouse(two));
     }
    
     private:
     int robTheHouse(vector<int> arr){
          vector<int> dp(arr.size()+1);
          dp[0] = arr[0];
          dp[1] = max(arr[1], arr[0]);
          
          for(int i=2; i<arr.size(); i++)
               dp[i] = max(dp[i-1], arr[i] + dp[i-2]);
          
          return dp[arr.size() - 1];
     }
};

TC: O(N)
SC: O(N)