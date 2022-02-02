class Solution {
     public:int uniquePathsWithObstacles(vector<vector<int>> &grid) {
          int m=grid.size(), n=grid[0].size();
          vector<vector<int>> meme(m, vector<int>(n, -1));
          return count(grid, 0, 0, meme);
     }
     
     private:int count(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &meme){
          if(i<0 or j<0 or i>=meme.size() or j>=meme[0].size() or grid[i][j]==1) return 0;
          if(i==meme.size()-1 and j==meme[0].size()-1) return 1;
          if(meme[i][j] != -1) return meme[i][j];
          
          return meme[i][j] = count(grid, i+1, j, meme) + count(grid, i, j+1, meme);
     }
};

TC: O(N * N)
SC: O(N * N)