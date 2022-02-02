class Solution {
     public:int uniquePaths(int m, int n) {
          vector<vector<int>> meme(m, vector<int>(n, -1));
          return count(0, 0, meme);
     }
     
     private:int count(int i, int j, vector<vector<int>> &meme){
          if(i<0 or j<0 or i>=meme.size() or j>=meme[0].size()) return 0;
          if(i==meme.size()-1 and j==meme[0].size()-1) return 1;
          if(meme[i][j] != -1) return meme[i][j];
          
          return meme[i][j] = count(i+1, j, meme) + count(i, j+1, meme);
     }
};

TC: O(N * N)
SC: O(N * N)