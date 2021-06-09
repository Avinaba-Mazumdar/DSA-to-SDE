#include <bits/stdc++.h>
using namespace std;

void combList(int ind, vector<vector<int>> &vv, vector<int> &v, vector<int> A, int B){
        if(B == 0){
            vv.push_back(v);
            return ;
        }
        if(ind == A.size()) return ;
        
        if(B >= A[ind]){
            v.push_back(A[ind]);
            combList(ind, vv, v, A, B-A[ind]);
            v.pop_back();
        }
        combList(ind+1, vv, v, A, B);
    }

int main(){
      int n, target; cin>>n>>target;
      vector<int> a(n); for(int i=0; i<n; i++) cin>>a[i];
      vector<vector<int>> vv;
      vector<int> v;
      combList(0, vv, v, a, target);
      for(int i=0; i<vv.size(); i++){
            for(int j=0; j<vv[i].size(); j++) cout<<vv[i][j]<<" ";
            cout<<endl;
      }
      return 0;
}