class Solution {
public:
    int orangesRotting(vector<vector<int>> &grid) {
        int r=grid.size(), c=grid[0].size(); int tot=0, cnt=0, ans=0;
        queue<pair<int, int>> q;
        int ox[4]={0,1,0,-1}, oy[4]={1,0,-1,0};
        
        for(int i=0; i<r; i++) for(int j=0; j<c; j++){
            if(grid[i][j] > 0) tot++;
            if(grid[i][j] == 2) q.push({i, j});
        }
        
        while(!q.empty()){
            int n = q.size();
            cnt += n;
            for(int it=0; it<n; it++){
                int dx=q.front().first, dy=q.front().second;
                q.pop();
                for(int i=0; i<4; i++){
                    int nx=dx+ox[i], ny=dy+oy[i];
                    if(nx>=0 and nx<r and ny>=0 and ny<c and grid[nx][ny]==1){
                        grid[nx][ny] = 2;
                        q.push({nx, ny});
                    }
                }
            }
            if(!q.empty()) ans++;
        }
        
        return (tot == cnt) ? ans : -1;
    }
};

//TC: O(R*C)
//SC: O(R*C)