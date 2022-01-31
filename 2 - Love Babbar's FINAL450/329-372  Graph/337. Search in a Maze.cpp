#include <bits/stdc++.h>
using namespace std;

vector<string> str;
vector<vector<int>> vis(5, vector<int>(5,0));

class Solution{
      public:
      void recur(int i, int j, string s, vector<vector<int>> m, int n){
            if(i<0 || j<0 || i>=n || j>=n) return ;
            if(m[i][j]==0 || vis[i][j]==1) return ;
            if(i==n-1 && j==n-1){
                  str.push_back(s);
                  return ;
            }
            vis[i][j] = 1;
            
            recur(i+1, j, s + "D", m, n);
            recur(i-1,j,s+'U',m,n);
            recur(i,j+1,s+'R',m,n);
            recur(i,j-1,s+'L',m,n);
            
            vis[i][j] = 0;
      }
    
      vector<string> findPath(vector<vector<int>> &m, int n) {
            str.clear();
            for(int i=0; i<n; i++){
                  for(int j=0; j<n; j++) vis[i][j]=0;
            }

            if(m[0][0]==0) return str;
            if(m[n-1][n-1]==0) return str;
            string s="";
            
            recur(0,0,s,m,n);
            sort(str.begin(), str.end());
            return str;
      };
};

int main(){
      int t; cin>>t;
      while(t--){
            int n; cin>>n;
            vector<vector<int>> m(n, vector<int>(n,0));
            for(int i=0; i<n; i++){
                  for(int j=0; j<n; j++) cin>>m[i][j];
            }
            Solution obj;
            vector<string> result = obj.findPath(m,n);
            if(result.size()==0) cout<<-1;
            else{
                  for(int i=0; i<result.size(); i++) cout<<result[i]<<"";
                  cout<<endl;
            }
            return 0;
      }
}