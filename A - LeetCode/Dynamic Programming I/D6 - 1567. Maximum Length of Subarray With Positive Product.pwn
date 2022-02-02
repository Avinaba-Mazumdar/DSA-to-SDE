class Solution {
     public:int getMaxLen(vector<int> &nums) {
          int positive=0, negative=0;
          int ans = 0;
          
          for(int &it : nums){
               if(it == 0) {
                    positive = 0;
                    negative = 0;
               }
               else if(it > 0){
                    positive++;
                    negative = (negative==0) ? 0 : negative+1;
               }
               else{
                    int temp = positive;
                    positive = (negative==0) ? 0 : negative+1;
                    negative = temp+1;
               }
               ans = max(ans, positive);
          }
          
          return ans;
     }
};

TC: O(N)
SC: O(1)