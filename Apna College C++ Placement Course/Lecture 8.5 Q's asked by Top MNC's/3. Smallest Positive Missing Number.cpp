#include <bits/stdc++.h>
using namespace std;

//AMAZON, ACCOLITE, SAMSUNG, SNAPDEAL

int main(){
      int n, m=0; cin>>n;
      int a[n]; for(int i=0; i<n; i++){
            cin>>a[i];
            m = max(m, a[i]);
      }
      bool b[m]; for(int i=0; i<m; i++) b[i] = false;

      for(int i=0; i<n; i++){
            if(a[i] >= 0)
                  b[a[i]] = true;
      }
      for(int i=1; i<m; i++){
            if(b[i] == false){
                  cout<<i<<endl;
                  break;
            }
      }
      return 0;
}