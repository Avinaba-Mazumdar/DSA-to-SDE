#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
      int t; cin>>t;
      for(int c=1; c<=t; c++){
            ll n; cin>>n;
            string s; cin>>s;
            
            ll ans = 0;
            ll left[n], right[n];

            if(s[0] == '1') left[0] = 0;
            else left[0] = -1;
            for(ll i=1; i<n; i++){
                  if(s[i] == '1') left[i] = i;
                  else left[i] = left[i-1];
            }

            if(s[n-1] == '1') right[n-1] = n-1;
            else right[n-1] = -1;
            for(ll i=n-2; i>=0; i--){
                  if(s[i] == '1') right[i] = i;
                  else right[i] = right[i+1];
            }

            for(int i=0; i<n; i++){
                  if(left[i] == -1) ans += abs(i - right[i]);
                  else if(right[i] == -1) ans += abs(i - left[i]);
                  else ans += min(abs(i - right[i]), abs(i - left[i]));
            }

            cout<<"Case #"<<c<<": "<<ans<<endl;
      }
      return 0;
}