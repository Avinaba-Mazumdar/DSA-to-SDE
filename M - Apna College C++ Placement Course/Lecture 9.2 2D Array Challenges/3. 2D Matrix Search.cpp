#include <bits/stdc++.h>
using namespace std;

//SAMSUNG, EXPEDIA

int main(){
      int n,m,k; cin>>n>>m>>k;
      int a[n][m];
      for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) cin>>a[i][j];
      }

      int row=0, col=m-1;
      while(col>=0 && row<n){
            if(a[row][col] == k){
                  cout<<row + 1<<" "<<col + 1<<endl;
                  return 0;
            }
            else if(a[row][col] > k) col--;
            else row++;
      }
      cout<<"Not Found"<<endl;
      return 0;
}