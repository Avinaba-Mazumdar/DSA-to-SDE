#include <bits/stdc++.h>
using namespace std;

//Given a "2xn" board ans tiles of size "2x1", count the number of ways to tile the given board using these tiles.

int tiling(int n){
      if (n == 0) return 0;
      if (n == 1) return 1;
      
      return tiling(n-1) + (n-2);
}

int main(){
      int n; cin>>n;
      tiling(n);
      return 0;
}