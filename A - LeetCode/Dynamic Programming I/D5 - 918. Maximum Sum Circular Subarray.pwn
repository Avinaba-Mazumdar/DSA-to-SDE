class Solution {
     public:int maxSubarraySumCircular(vector<int> &nums) {
          int n=nums.size(), sum=0;
          int minSum=INT_MAX, tempMinSum=0;
          int maxSum=INT_MIN, tempMaxSum=0;
          
          for(int i=0; i<n; i++){
               sum += nums[i];
               
               tempMinSum += nums[i];
               minSum = min(minSum, tempMinSum);
               if(tempMinSum > 0) tempMinSum = 0;
               
               tempMaxSum += nums[i];
               maxSum = max(maxSum, tempMaxSum);
               if(tempMaxSum < 0) tempMaxSum = 0;
          }
          
          if(minSum == sum) return maxSum;
          return max(maxSum, sum-minSum);
     }
};

TC: O(N)
SC: O(1)