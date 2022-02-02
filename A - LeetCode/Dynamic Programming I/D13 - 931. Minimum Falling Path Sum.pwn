class Solution {
     public:int minFallingPathSum(vector<vector<int>> &mat) {
          int n = mat.size();
          vector<vector<int>> meme(n, vector<int>(n, INT_MAX));
          int ans = INT_MAX;
          
          for(int i=0; i<n; i++) ans = min(ans, findMin(mat, 0, i, meme));
          
          return ans;
     }
     
     private:int findMin(vector<vector<int>> &mat, int i, int j, vector<vector<int>> &meme){
          if(i==mat.size()-1 and j>=0 and j<mat.size()) return mat[i][j];
          if(j<0 or j>=mat.size()) return INT_MAX;
          if(meme[i][j] != INT_MAX) return meme[i][j];
          
          return meme[i][j] = min({findMin(mat, i+1, j-1, meme), 
                                   findMin(mat, i+1, j, meme), findMin(mat, i+1, j+1, meme)}) + mat[i][j];
     }
};

TC: O(N * N)
SC: O(N * N)