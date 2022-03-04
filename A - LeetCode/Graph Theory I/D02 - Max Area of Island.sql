class Solution {
     public:int maxAreaOfIsland(vector<vector<int>>&grid) {
          int rows=grid.size(), cols=grid[0].size();
          int ans = 0;
          
          for(int i=0; i<rows; i++) for(int j=0; j<cols; j++){
               if(grid[i][j]==1){
                    ans = max(ans, findArea(grid, i, j));
               }
          }
          
          return ans;
     }
     
     private:int findArea(vector<vector<int>>&grid, int i, int j){
          if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]!=1) return 0;
          
          grid[i][j] = -1;
          
          return 1 + findArea(grid, i+1, j) + findArea(grid, i, j+1) + findArea(grid, i, j-1) + findArea(grid, i-1, j);
     }
};