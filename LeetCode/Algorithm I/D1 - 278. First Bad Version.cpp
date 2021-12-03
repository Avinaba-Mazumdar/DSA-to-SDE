#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     int firstBadVersion(int n) {
          int left = 0, right = n, mid;
          
          while(right - left > 1){
               mid = left + (right - left)/2;
               
               if(isBadVersion(mid)) right = mid;
               else left = mid;
          }
          
          return right;
     }
};

int bad;

bool isBadVersion(int version){
     if(version >= bad) return true;
     return false;
}

int main(){
     Solution obj;
     int n=5;
     bad=4;
     cout<<obj.firstBadVersion(n);

     return 0;
}

//TC: O(logN)
//SC: O(1)