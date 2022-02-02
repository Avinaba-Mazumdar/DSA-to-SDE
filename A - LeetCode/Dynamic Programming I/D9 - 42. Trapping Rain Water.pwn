class Solution {
     public:int trap(vector<int> &height) {
          int n = height.size();
          vector<int> left(n), right(n);
          int leftMax=0, rightMax=0;
          int ans = 0;
          
          for(int i=0; i<n; i++){
               leftMax = max(leftMax, height[i]);
               left[i] = leftMax;
          }
          
          for(int i=n-1; i>=0; i--){
               rightMax = max(rightMax, height[i]);
               right[i] = rightMax;
          }
          
          for(int i=0; i<n; i++){
               ans += min(left[i], right[i]) - height[i];
          }
          return ans;
     }
};

TC: O(N)
SC: O(N)