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

//TC: O(R*C)
// SC: O(R*C)