#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     vector<int> twoSum(vector<int> &nums, int target) {
          vector<int> ans;
          unordered_map<int, int> mpp;
          int n = nums.size();
          
          for(int i=0; i<n; i++){
               if(mpp.find(target-nums[i]) == mpp.end()) mpp[nums[i]] = i;
               else{
                    ans.push_back(i);
                    ans.push_back(mpp[target-nums[i]]);
                    return ans;
               }
          }
          
          return ans;
     }
};

int main(){
     Solution obj;
     vector<int> nums = {3,2,4};
     int target = 6;

     vector<int> ans = obj.twoSum(nums, target);
     for(int i=0; i<ans.size(); i++)
          cout<<ans[i];

     return 0;
}

//TC:  O(N)
// SC:  O(N)