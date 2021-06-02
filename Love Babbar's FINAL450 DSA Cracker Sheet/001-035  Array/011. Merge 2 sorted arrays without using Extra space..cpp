#include <bits/stdc++.h>
using namespace std;

int main(){
      //INPUT
      int n,m; cin>>n>>m;
      int a1[n], a2[m];
      for(int i=0; i<n; i++) cin>>a1[i];
      for(int i=0; i<m; i++) cin>>a2[i];

      //ALGORITHM
      int i=n-1, j=0;
      while(i>=0 && j<m){
            if(a1[i] > a2[j]){
                  int temp = a1[i];
                  a1[i] = a2[j];
                  a2[j] = temp;
            }
            i--; j++;
      }
      sort(a1, a1+n);
      sort(a2, a2+m);

      //OUTPUT
      for(int i=0; i<n; i++) cout<<a1[i]<<" ";
      for(int i=0; i<m; i++) cout<<a2[i]<<" ";
      cout<<endl;
      return 0;
}