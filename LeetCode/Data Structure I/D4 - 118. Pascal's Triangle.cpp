#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     vector<vector<int>> generate(int numRows) {
          vector<vector<int>> ans;
          
          for(int i=0; i<numRows; i++){
               vector<int> temp(i+1, 1);
               
               for(int j=1; j<i; j++){
                    temp[j] = ans[i-1][j-1] + ans[i-1][j];
               }
               ans.push_back(temp);
          }
          
          return ans;
     }
};

int main(){
     Solution obj;
     int numRows = 5;
     
     vector<vector<int>> ans = obj.generate(numRows);
     for(vector<int> it : ans){
          for(int i : it) cout<<i;
          cout<<"\n";
     }

     return 0;
}

//TC: O(N^2)
// SC: O(N^2)