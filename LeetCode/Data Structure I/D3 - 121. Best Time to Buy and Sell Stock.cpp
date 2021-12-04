#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     int maxProfit(vector<int> &prices) {
          int ans=0, buyCost=prices[0];
          
          for(int it : prices){
               if(it < buyCost) buyCost = it;
               else ans = max(ans, it - buyCost);
          }
          
          return ans;
     }
};

int main(){
     Solution obj;
     vector<int> prices = {7,1,5,3,6,4};
     cout<<obj.maxProfit(prices);

     return 0;
}

//TC: O(N)
// SC: O(1)