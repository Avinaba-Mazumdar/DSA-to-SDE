class Solution {
     public:int maxDistance(vector<vector<int>>&grid) {
          int dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0};
          int n = grid.size();
          int ans = -1;
          
          queue<pair<int,int>> Q;
          for(int i=0; i<n; i++) for(int j=0; j<n; j++)
               if(grid[i][j]) Q.push({i,j});
          
          
          if(Q.size() == n*n) return -1;
          
          while(!Q.empty()){
               int size = Q.size();
               ans++;
               while(size--){
                    int cx=Q.front().first, cy=Q.front().second;
                    Q.pop();
                    
                    for(int i=0; i<4; i++){
                         int X=cx+dx[i], Y=cy+dy[i];
                         if(X>=0 and Y>=0 and X<n and Y<n and grid[X][Y]==0){
                              Q.push({X,Y});
                              grid[X][Y] = 1;
                         }
                    }
               }
          }
          
          return ans;
     }
};