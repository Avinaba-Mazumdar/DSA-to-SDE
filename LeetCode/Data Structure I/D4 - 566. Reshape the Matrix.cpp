#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c) {
          int col = mat[0].size(), total = mat.size() * col;
          if(r*c != total) return mat;
          
          vector<vector<int>> ans(r, vector<int>(c));
          for(int i=0; i<total; i++)
               ans[i/c][i%c] = mat[i/col][i%col];
          
          return ans;
     }
};

int main(){
     Solution obj;
     vector<vector<int>> mat = {{1,2},{3,4}};
     int r=1, c=4;

     vector<vector<int>> ans = obj.matrixReshape(mat, r, c);
     for(vector<int> it : ans){
          for(int i : it) cout<<i;
          cout<<"\n";
     }

     return 0;
}

//TC: O(R*C)
// SC: O(R*C)