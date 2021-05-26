#include <bits/stdc++.h>
using namespace std;

int main(){
      int n; cin>>n;
      int a[n]; for(int i=0; i<n; i++) cin>>a[i];

      int count=0;
      while(count < n){
            for(int i=0; i<n-count; i++){
                  if(a[i] > a[i+1]) swap(a[i], a[i+1]);
            }
            count++;
      }

      for(int i=0; i<n; i++) cout<<a[i]<<" ";
      return 0;
}