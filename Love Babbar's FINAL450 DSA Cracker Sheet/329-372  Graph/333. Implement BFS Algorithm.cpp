#include <bits/stdc++.h>
using namespace std;

//Undirected Unweighted Graph

vector<int> BFS(int N, vector<int> adj[]){
      vector<int> bfs;
      vector<int> vis(N+1, 0);
      for(int i=1; i<=N; i++){
            if(!vis[i]){
                  queue<int> q;
                  q.push(i);
                  vis[i] = 1;
                  while(!q.empty()){
                        int node = q.front();
                        q.pop();
                        bfs.push_back(node);
                        for(auto it : adj[node]){
                              if(!vis[it]){
                                    q.push(it);
                                    vis[it] = 1;
                              }
                        }
                  }
            }
      }
      return bfs;
}

int main(){
      int n,e; cin>>n>>e;
      vector<int> adj[n+1];
      for(int i=0;i<n; i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
      }

      vector<int> bfs = BFS(n, adj);
      for(int i=0; i<bfs.size(); i++) cout<<bfs[i]<<endl;
      return 0;
}