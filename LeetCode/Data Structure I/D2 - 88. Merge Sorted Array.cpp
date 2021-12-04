#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
          int i=m-1, j=n-1;
          
          while(i>=0 and j>=0){
               if(nums1[i] < nums2[j]){
                    nums1[i + j + 1] = nums2[j];
                    j--;
               }
               else if(nums1[i] > nums2[j]){
                    nums1[i + j + 1] = nums1[i];
                    i--;
               }
               else{
                    nums1[i + j + 1] = nums1[i];
                    nums1[i + j] = nums1[i];
                    i--;
                    j--;
               }
          }
          
          while(j >= 0){
               nums1[j] = nums2[j];
               j--;
          }
     }
};

int main(){
     Solution obj;
     int m=3, n=3;
     vector<int> nums1={1,2,3,0,0,0}, nums2={2,5,6};
     
     obj.merge(nums1, m, nums2, n);
     for(int i=0; i<nums1.size(); i++)
          cout<<nums1[i]<<" ";

     return 0;
}

//TC: O(N+M)
//SC: O(1)