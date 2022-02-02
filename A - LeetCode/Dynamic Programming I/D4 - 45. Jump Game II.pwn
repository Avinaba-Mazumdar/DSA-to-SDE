class Solution {
     public:int jump(vector<int> &nums){
          vector<int> meme(nums.size(), INT_MAX-1);
          return minJump(nums, 0, meme);
     }
     
     private:int minJump(vector<int> &nums, int idx, vector<int> &meme){
          if(idx >= nums.size()-1) return 0;
          if(meme[idx] != INT_MAX-1) return meme[idx];
          
          for(int i=1; i<=nums[idx]; i++){
               meme[idx] = min(meme[idx], 1 + minJump(nums, idx+i, meme));
          }
          
          return meme[idx];
     }
};

TC: O(N)
SC: O(N)