class Solution {
     public:int countSubIslands(vector<vector<int>>&g1, vector<vector<int>>&g2) {
          int rows=g1.size(), cols=g1[0].size();
          int ans = 0;
          bool chk = true;
          
          for(int i=0; i<rows; i++) for(int j=0; j<cols; j++){
               if(g2[i][j]==1 and g1[i][j]==1){
                    chk = true;
                    isSame(g1, g2, i, j, chk);
                    if(chk) ans++;
               }
          }
          
          return ans;
     }
     
     private:void isSame(vector<vector<int>>&g1, vector<vector<int>>&g2, int i, int j, bool &chk){
          if(i<0 or j<0 or i>=g1.size() or j>=g1[0].size() or g2[i][j]!=1) return;
          
          if(g1[i][j] == 0){
               chk = false;
               return;
          }
          
          g2[i][j] = 0;
          
          isSame(g1, g2, i+1, j, chk);
          isSame(g1, g2, i-1, j, chk);
          isSame(g1, g2, i, j+1, chk);
          isSame(g1, g2, i, j-1, chk);
          return;
     }
};