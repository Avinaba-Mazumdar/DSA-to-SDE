class Solution {
     public:int minPathSum(vector<vector<int>> &grid) {
          vector<vector<int>> meme(grid.size(), vector<int>(grid[0].size(), INT_MAX));
          return findPath(grid, 0, 0, meme);
     }
     
     private:int findPath(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &meme){
          if(i==grid.size()-1 and j==grid[0].size()-1) return grid[i][j];
          if(i>=grid.size() or j>=grid[0].size()) return INT_MAX;
          if(meme[i][j] != INT_MAX) return meme[i][j];
          
          return meme[i][j] = grid[i][j] + min(findPath(grid, i+1, j, meme), findPath(grid, i, j+1, meme));
     }
};

TC: O(N * N)
SC: O(N * N)