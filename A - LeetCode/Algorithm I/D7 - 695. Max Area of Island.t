class Solution {
     public:
     int maxAreaOfIsland(vector<vector<int>> &grid) {
          int row=grid.size(), col=grid[0].size();
          int ans = 0;
          
          for(int i=0; i<row; i++){
               for(int j=0; j<col; j++){
                    if(grid[i][j] == 1){
                         ans = max(ans, findMax(grid, i, j));
                    }
               }
          }
          
          return ans;
     }
     
     private:
     int findMax(vector<vector<int>> &grid, int i, int j){
          if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j]==0) return 0;
          
          grid[i][j] = 0;
          
          return 1 + findMax(grid, i+1, j) + findMax(grid, i-1, j) + findMax(grid, i, j+1) + findMax(grid, i, j-1);
     }
};

//TC: O(R*C)
//SC: O(R*C)