#include <bits/stdc++.h>
using namespace std;

int first(int a[], int n, int i, int k){
      if(i == n) return -1;
      if(a[i] == k) return i;
      first(a, n, i+1, k);
}

int last(int a[], int n, int i, int k){
      if(i == -1) return -1;
      if(a[i] == k) return i;
      last(a, n, i-1, k);
}

int main(){
      int n,k; cin>>n>>k;
      int a[n]; for(int i=0; i<n; i++) cin>>a[i];

      cout<<first(a, n, 0, k)<<" "<<last(a, n, n-1, k);
      return 0;
}