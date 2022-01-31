#include <bits/stdc++.h>
using namespace std;

int main(){
      int n,m; cin>>n>>m;
      int a[n][m];
      for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) cin>>a[i][j];
      }
      int rowS=0, rowE=n-1, colS=0, colE=m-1;

      while(rowS <= rowE && colS <= colE){
            for(int i=colS; i<=colE; i++){
                  cout<<a[rowS][i]<<" ";
            }
            cout<<endl; rowS++;

            for(int i=rowS; i<=rowE; i++){
                  cout<<a[i][colE]<<" ";
            }
            cout<<endl; colE--;

            for(int i=colE; i>=colS; i--){
                  cout<<a[rowE][i]<<" ";
            }
            cout<<endl; rowE--;

            for(int i=rowE; i>=rowS; i--){
                  cout<<a[i][colS]<<" ";
            }
            cout<<endl; colS++;
      }
      return 0;
}