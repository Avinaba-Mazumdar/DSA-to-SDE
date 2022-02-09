class Solution {
     public:int lengthOfLIS(vector<int> &nums) {
          int n = size(nums);
          vector<int> meme(n+1, -1);
          return function(nums, 0, -1, meme);
     }
     
     private:int function(vector<int> &nums, int curr, int prev, vector<int> &meme){
          if(curr >= nums.size()) return 0;
          if(meme[prev+1] != -1) return meme[prev+1];
          
          int dntTake = function(nums, curr+1, prev, meme);
          int take = 0;
          if(prev==-1 or nums[prev]<nums[curr]) take = 1 + function(nums, curr+1, curr, meme);
          
          return meme[prev+1] = max(take, dntTake);
     }
};

TC: O(N * N)
SC: O(N)