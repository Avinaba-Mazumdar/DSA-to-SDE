#include <bits/stdc++.h>
using namespace std;

//Find the number of ways in which n friends can remain single or can be paired up.

int fpp(int n){
      if (n == 0 || n == 1 || n == 2) return n;
      else{
            return fpp(n-1) + fpp(n-2)*(n-1);
      }
}

int main(){
      int n; cin>>n;
      fpp(n);
      return 0;
}