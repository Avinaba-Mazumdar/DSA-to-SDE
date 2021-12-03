#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     int searchInsert(vector<int> &nums, int target) {
          int left=0, right=nums.size()-1, mid;
          
          while(left <= right){
               mid = left + (right - left)/2;
               
               if(target < nums[mid]) right = mid - 1;
               else if(target > nums[mid]) left = mid + 1;
               else return mid;
          }
          
          return left;
     }
};

int main(){
     Solution obj;
     vector<int> nums = {1,3,5,6};
     int target = 0;
     cout<<obj.searchInsert(nums, target);

     return 0;
}

//TC: O(logN)
//SC: O(1)