#include <bits/stdc++.h>
using namespace std;

int main(){
      int n,e; cin>>n>>e;
      vector<int> adj[n+1];
      for(int i=0;i<n; i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
      }

      
}