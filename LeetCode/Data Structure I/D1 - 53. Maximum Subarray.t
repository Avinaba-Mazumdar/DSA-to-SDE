#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     int maxSubArray(vector<int> &nums) {
          int maxSum=INT_MIN, currSum=0;
          int n = nums.size();
          
          for(int i=0; i<n; i++){
               currSum += nums[i];
               maxSum = max(maxSum, currSum);
               if(currSum < 0) currSum = 0;
          }
          
          return maxSum;
     }
};

int main(){
     Solution obj;
     vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
     cout<<obj.maxSubArray(nums);

     return 0;
}

//TC: O(N)
// SC: O(1)