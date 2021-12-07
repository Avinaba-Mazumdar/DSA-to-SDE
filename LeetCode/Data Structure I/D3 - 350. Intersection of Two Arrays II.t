#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
          if(nums2.size() < nums1.size()) return intersect(nums2, nums1);
          
          unordered_map<int, int> map;
          vector<int> ans;
          
          for(int i : nums1) map[i]++;
          
          for(int i : nums2)
               if(map[i]-- > 0)
                    ans.push_back(i);
               
          return ans;
     }
};

int main(){
     Solution obj;
     vector<int> nums1={4,9,5}, nums2={9,4,9,8,4};
     
     vector<int> ans = obj.intersect(nums1, nums2);
     for(int i : ans) cout<<i<<" ";

     return 0;
}

//TC: O(N+M)
// SC: O(N)