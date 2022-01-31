#include <bits/stdc++.h>
using namespace std;

int main(){
      int n,k; cin>>n>>k;
      int a[n]; for(int i=0; i<n; i++) cin>>a[i];
      map<char, int> m;
      int c=0;
      for (int i=0; i<n; i++){
            int x=k-a[i];
            if(m[x] == 0) m[a[i]]++;
            else{
                  c += m[x];
                  m[a[i]]++;
            }
      }
      cout<<c;
      return 0;
}