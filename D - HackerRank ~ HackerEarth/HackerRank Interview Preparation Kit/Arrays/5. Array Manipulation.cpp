#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
      ll n,m; cin>>n>>m;
      ll v[n]; for(int i=0; i<n; i++) v[i]=0;
      ll res = LLONG_MIN;

      while(m--){
            ll a,b,k; cin>>a>>b>>k;
            for(ll i=a-1; i<=b-1; i++){
                  v[i] += k;
                  res = max(res, v[i]);
            }
      }

      cout<<res<<endl;
      return 0;
}