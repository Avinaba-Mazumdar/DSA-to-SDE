class Solution {
     public:
     int deleteAndEarn(vector<int> &nums) {
          vector<int> sum(10002);
          int n = nums.size();
          
          for(int i=0; i<n; i++) sum[nums[i]] += nums[i];
          
          for(int i=2; i<10001; i++)
               sum[i] = max(sum[i-1], sum[i-2] + sum[i]);
          
          return sum[10000];
     }
};

//TC: O(N)
//SC: O(N)