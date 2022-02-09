class Solution {
     public:int maximalSquare(vector<vector<char>> &mat) {
          int r=mat.size(), c=mat[0].size();
          int ans = 0;
          vector<vector<int>> meme(r, vector<int> (c, -1));
          
          for(int i=0; i<r; i++)
               for(int j=0; j<c; j++)
                    if(mat[i][j] == '1')
                         ans = max(ans, goWIDE(mat, meme, i, j));
          
          return ans * ans;
     }
     
     private:int goWIDE(vector<vector<char>> &mat, vector<vector<int>> &meme, int i, int j){
          if(i>=mat.size() or j>=mat[0].size() or mat[i][j]=='0') return 0;
          if(meme[i][j] != -1) return meme[i][j];
          
          return meme[i][j] = 1 + min({goWIDE(mat, meme, i+1, j), 
                                        goWIDE(mat, meme, i, j+1), goWIDE(mat, meme, i+1, j+1)});
     }
};

TC: O(N * N)
SC: O(N * N)