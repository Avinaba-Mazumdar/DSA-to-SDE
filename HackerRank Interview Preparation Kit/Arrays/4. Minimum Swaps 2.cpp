#include <bits/stdc++.h>
using namespace std;

int main(){
      int n; cin>>n;
      int a[n]; for(int i=0; i<n; i++) cin>>a[i];

      vector<pair<int, int>> v(n);
      for(int i=0; i<n; i++) v[i] = {a[i], i};
      sort(v.begin(), v.end());
      int swaps = 0;

      for(int i=0; i<n; i++){
            if(v[i].second != i){
                  swaps++;
                  swap(v[i], v[v[i].second]);
                  i--;
            }
      }

      cout<<swaps<<endl;
      return 0;
}