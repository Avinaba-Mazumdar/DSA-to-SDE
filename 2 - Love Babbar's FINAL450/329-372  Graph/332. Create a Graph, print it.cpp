#include <bits/stdc++.h>
using namespace std;

//Undirected Unweighted Graph

int main(){
      int n,e; cin>>n>>e;
      vector<int> adj[n+1];

      for(int i=0; i<e; i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
      }

      for(int i=1; i<=n; i++){
            cout<<i<<"--> ";
            for(int j=0; j<adj[i].size(); j++)
                  cout<<adj[i][j]<<" ";
            cout<<endl;
      }
}