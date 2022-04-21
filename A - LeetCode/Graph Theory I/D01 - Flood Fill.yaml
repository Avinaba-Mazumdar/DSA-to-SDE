class Solution {
     public:
     vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) {
          if(image[sr][sc] == newColor) return image;
          
          fill(image, newColor, image[sr][sc], sr, sc);
          
          return image;
     }
     
     private:
     void fill(vector<vector<int>> &image, int newColor, int oldColor, int i, int j){
          if(i<0 or i>=image.size() or j<0 or j>=image[0].size()) return;
          if(image[i][j] != oldColor) return;
          
          image[i][j] = newColor;
          
          fill(image, newColor, oldColor, i+1, j);
          fill(image, newColor, oldColor, i, j+1);
          fill(image, newColor, oldColor, i-1, j);
          fill(image, newColor, oldColor, i, j-1);
     }
};