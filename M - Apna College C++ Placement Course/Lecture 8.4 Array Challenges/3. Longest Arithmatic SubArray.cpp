#include <bits/stdc++.h>
using namespace std;

//GOOGLE Kickstart

int main(){
      int n; cin>>n;
      int a[n]; for(int i=0; i<n; i++) cin>>a[i];

      int pd = a[0] - a[1];
      int i = 2;
      int ans = 2;
      int len = 2;

      while(i<n){
            if (pd == a[i-1]-a[i]) len++;
            else{
                  pd = a[i-1]-a[i];
                  len = 2;
            }
            i++;
            ans = max(len, ans);
      }
      cout<<ans<<endl;
      return 0;
}