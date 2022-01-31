#include <bits/stdc++.h>
using namespace std;

int main(){
      int n; cin>>n;
      int a[n]; for(int i=0; i<n; i++) cin>>a[i];
      int maxP =0;
      int minP = INT_MAX;
      for(int i=0; i<n; i++){
            if(a[i] < minP) minP = a[i];
            else if (a[i] - minP > maxP) maxP = a[i] - minP;
      }
      cout<<maxP<<endl;
      return 0;
}