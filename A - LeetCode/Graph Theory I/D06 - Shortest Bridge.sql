class Solution {
     public:int shortestBridge(vector<vector<int>>&grid) {
          int n = grid.size();
          int cnt = 0;
          vector<pair<int,int>> X;
          vector<pair<int,int>> Y;
          
          for(int i=0; i<n; i++) for(int j=0; j<n; j++){
               if(grid[i][j]){
                    cnt++;
                    if(cnt == 1)
                         dfs(grid, i, j, X);
                    if(cnt == 2){
                         dfs(grid, i, j, Y);
                         break;
                    }
               }
          }
          
          int ans = INT_MAX;
          
          for(int i=0; i<X.size(); i++) for(int j=0; j<Y.size(); j++){
               int dist = abs(X[i].first - Y[j].first) + abs(X[i].second - Y[j].second) - 1;
               ans = min(ans, dist);
          }
          
          return ans;
     }
     
     private:void dfs(vector<vector<int>>&grid, int i, int j, vector<pair<int,int>>&V){
          int n = grid.size();
          if(i<0 or j<0 or i>=n or j>=n or !grid[i][j]) return;
          
          grid[i][j] = 0;
          V.push_back({i,j});
          
          dfs(grid, i+1, j, V);
          dfs(grid, i-1, j, V);
          dfs(grid, i, j+1, V);
          dfs(grid, i, j-1, V);
          return;
     }
};