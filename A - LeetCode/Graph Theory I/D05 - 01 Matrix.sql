class Solution {
     public:vector<vector<int>> updateMatrix(vector<vector<int>> &mat){
          int m=mat.size(), n=mat[0].size();
          vector<vector<int>> ans(m, vector<int>(n,-1));
          queue<pair<int,int>> Q;
          
          for(int i=0; i<m; i++) for(int j=0; j<n; j++){
               if(!mat[i][j]){
                    Q.push({i,j});
                    ans[i][j] = 0;
               }
          }
          
          if(Q.size() == n*m) return mat;
          
          int dx[4] = {0,0,1,-1};
          int dy[4] = {1,-1,0,0};
          
          while(!Q.empty()){
               int size = Q.size();
               while(size--){
                    int cx = Q.front().first;
                    int cy = Q.front().second;
                    Q.pop();
                    
                    for(int i=0; i<4; i++){
                         int nx=dx[i]+cx, ny=dy[i]+cy;
                         if(nx>=0 and ny>=0 and nx<m and ny<n and mat[nx][ny] and ans[nx][ny]==-1){
                         ans[nx][ny] = ans[cx][cy] + 1;
                         Q.push({nx,ny});
                         }
                    }
               }
          }
          
          return ans;
     }
};