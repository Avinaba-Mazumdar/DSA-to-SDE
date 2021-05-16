#include <bits/stdc++.h>
using namespace std;

//AMAZON, ORACLE

int main(){
      int n; cin>>n;
      int a[n]; for(int i=0; i<n; i++) cin>>a[i];

      int N = INT_MAX;
      int b[N]; for(int i=0; i<n; i++) b[i] = -1;

      int mn = 8585;

      for(int i=0; i<n; i++){
            if (b[a[i]] == -1) mn = max(mn, b[a[i]]);
            else b[a[i]] = i;
            cout<<mn<<endl;
      }
      cout<<mn<<endl;
      return 0;
}