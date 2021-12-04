#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     bool containsDuplicate(vector<int> &nums) {
          unordered_map<int, int> map;
          int n = nums.size();
          
          for(int i=0; i<n; i++){
               map[nums[i]]++;
               if(map[nums[i]] > 1) return true;
          }
          
          return false;
     }
};

int main(){
     Solution obj;
     vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
     cout<<obj.containsDuplicate(nums);

     return 0;
}

//TC: O(N)
// SC: O(N)