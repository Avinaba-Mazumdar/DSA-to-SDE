#include <bits/stdc++.h>
using namespace std;

int main(){
      int n=6, res=INT_MIN;
      int a[n][n];
      for(int i=0; i<n; i++){
            for(int j=0; j<n; j++) cin>>a[i][j];
      }

      for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                  int sum=0;
                  sum = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
                  res = max(sum, res);
            }
      }

      cout<<res<<endl;
      return 0;
}