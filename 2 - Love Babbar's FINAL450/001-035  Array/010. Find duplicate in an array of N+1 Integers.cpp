#include <bits/stdc++.h>
using namespace std;

int main() {
      int n, temp; cin>>n;
      int interval[n][2];
      for(int i=0; i<n; i++){
            for(int j=0; j<2; j++) cin>>interval[i][j];
      }

      sort(interval, interval+n);

      for(int i=0; i<n; i++){
            for(int j=0; j<2; j++) cout<<interval[i][j]<<" ";
            cout<<endl;
      }
    return 0;
}