#include <bits/stdc++.h>
using namespace std;

//AMAZON, ORACLE

int main(){
      int n, N; cin>>n;
      int a[n]; for(int i=0; i<n; i++){
            cin>>a[i];
            N = max(N, a[i]);
      }
      
      int b[N]; for(int i=0; i<N; i++) b[i] = -1;

      int mn = INT_MAX;

      for(int i=0; i<n; i++){
            if(b[a[i]] != -1) mn = min(mn, b[a[i]]);
            else{
                  b[a[i]] = i;
            }
      }
      if(mn == INT_MAX) cout<<-1<<endl;
      else cout<<mn<<endl;
      return 0;
}