#include <bits/stdc++.h>
using namespace std;

//Put n items with given weight and value in a knapsack of capacity W to get the maximum total value in the knapsack.

int knapsack(int v[], int w[], int n, int W){
      if(n==0 || W==0) return 0;
      if(W < v[n-1]) knapsack(v, w, n-1, W);

      return max(knapsack(v, w, n-1, W-w[n-1])+v[n-1], knapsack(v, w, n-1, W));
}

int main(){
      int n, W; cin>>n>>W;
      int v[n], w[n];
      for(int i=0; i<n; i++) cin>>v[i];
      for(int i=0; i<n; i++) cin>>w[i];
      int s=knapsack(v, w, n, W);
      cout<<s;
      return 0;
}