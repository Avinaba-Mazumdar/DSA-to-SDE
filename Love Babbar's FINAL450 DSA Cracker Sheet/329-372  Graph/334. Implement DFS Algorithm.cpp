#include <bits/stdc++.h>
using namespace std;

void Dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &dfs){
      dfs.push_back(node);
      vis[node] = 1;
      for(auto it : adj[node]){
            if(!vis[it]) Dfs(it, vis, adj, dfs);
      }
      return ;
}

vector<int> DFS(int N, vector<int> adj[]){
      vector<int> dfs;
      vector<int> vis(N+1, 0);
      for(int i=1; i<=N; i++){
            if(!vis[i]) Dfs(i, vis, adj, dfs);
      }
      return dfs;
}

int main(){
      int n,e; cin>>n>>e;
      vector<int> adj[n+1];
      for(int i=0;i<n; i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
      }

      vector<int> dfs = DFS(n, adj);
      for(int i=0; i<dfs.size(); i++) cout<<dfs[i]<<endl;
      return 0;
}