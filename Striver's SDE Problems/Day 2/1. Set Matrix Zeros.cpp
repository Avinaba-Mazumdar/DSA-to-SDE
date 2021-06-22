#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &matrix) {
      int col0=1, rows=matrix.size(), cols=matrix[0].size();
      for(int i=0; i<rows; i++){
            if(matrix[i][0] == 0) col0=0;
            for(int j=1; j<cols; j++){
                  if(matrix[i][j] == 0){
                        matrix[i][0] = 0;
                        matrix[0][j] = 0;
                  }
            }
      }
      for(int i=rows-1; i>=0; i--){
            for(int j=cols-1; j>0; j--){
                  if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
            if (col0 == 0) matrix[i][0] = 0;
      }  
}

int main(){
      int r,c; cin>>r,c;
      vector<vector<int>> matrix(r, vector<int>(c));
      for(int i=0; i<r; i++){
            vector<int> temp;
            for(int j=0; j<c; j++) cin>>temp[j];
            matrix.push_back(temp);
      }

      for(int i=0; i<r; i++){
            for(int j=0; j<c; j++) cout<<matrix[i][j]<<" ";
      }
      return 0;
}