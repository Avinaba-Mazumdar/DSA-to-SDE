class Solution {
     public:int maxProduct(vector<int> &nums) {
          int n=nums.size(), pro=1;
          int leftPro=INT_MIN, rightPro=INT_MIN;
          
          for(int i=0; i<n; i++){
               pro *= nums[i];
               leftPro = max(leftPro, pro);
               if(pro == 0) pro = 1;
          } pro = 1;
          for(int i=n-1; i>=0; i--){
               pro *= nums[i];
               rightPro = max(rightPro, pro);
               if(pro == 0) pro = 1;
          }
          
          return max(leftPro, rightPro);
     }
};

TC: O(N)
SC: O(1)