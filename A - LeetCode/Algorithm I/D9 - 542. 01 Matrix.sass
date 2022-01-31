class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &mat) {
        int r=mat.size(), c=mat[0].size();
        int x[4]={-1,0,1,0}, y[4]={0,1,0,-1};
        
        vector<vector<int>> ans(r, vector<int>(c, -1));
        queue<pair<int, int>> q;
        
        for(int i=0; i<r; i++) for(int j=0; j<c; j++) if(mat[i][j] == 0){
            q.push({i, j}); ans[i][j] = 0;
        }
        
        while(!q.empty()){
            auto point = q.front(); q.pop();
            
            for(int dir=0; dir<4; dir++){
                int xd = point.first + x[dir];
                int yd = point.second + y[dir];
                
                if(xd>=0 and yd>=0 and xd<r and yd<c and mat[xd][yd]==1 and ans[xd][yd]==-1){
                    ans[xd][yd] = ans[point.first][point.second] + 1;
                    q.push({xd, yd});
                }
            }
        }
        
        return ans;
    }
};

//TC: O(R*C)
//SC: O(R*C)