#include <bits/stdc++.h>
using namespace std;

int main(){
      int n,m; cin>>n>>m;
      int a[n]; for(int i=0;i<n; i++) cin>>a[i];

      rotate(a, a + (m % n), a + n);

      for(int i=0;i<n; i++) cout<<a[i]<<" ";
      return 0;
}