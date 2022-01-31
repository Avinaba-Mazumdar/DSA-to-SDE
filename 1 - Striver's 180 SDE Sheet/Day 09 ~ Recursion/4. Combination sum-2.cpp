#include <bits/stdc++.h>
using namespace std;

void unique(int ind, vector<int> &v, vector<vector<int>> &vv, vector<int> A, int B){
      if(B == 0){
            vv.push_back(v);
            return ;
      }
      
      for(int i=ind; i<A.size(); i++){
            if(i>ind && A[i] == A[i-1]) continue;
            if(A[i] > B) break;
            v.push_back(A[i]);
            unique(i+1, v, vv, A, B-A[i]);
            v.pop_back();
      }
}

int main(){
      int n, B; cin>>n>>B;
      vector<int> A(n); for(int i=0; i<n; i++) cin>>A[i];
      vector<vector<int>> vv;
      vector<int> v;
      sort(A.begin(), A.end());
      unique(0, v, vv, A, B);
      for(int i=0; i<vv.size(); i++){
            for(int j=0; j<vv[i].size(); j++) cout<<vv[i][j]<<" ";
            cout<<endl;
      }
      return 0;
}