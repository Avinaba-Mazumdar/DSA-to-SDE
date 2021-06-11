#include <bits/stdc++.h>
using namespace std;

void ansList(int ind, vector<int> &a, vector<vector<int>> &vv){
      if(ind == a.size()){
            vv.push_back(a);
            return;
      }
      for(int i=ind; i<a.size(); i++){
            swap(a[ind], a[i]);
            ansList(ind+1, a, vv);
            swap(a[ind], a[i]);
      }
}

int main(){
      int n; cin>>n;
      vector<int> a(n); for(int i=0; i<n; i++) cin>>a[i];
      vector<vector<int>> vv;
      ansList(0, a, vv);
      for(int i=0; i<vv.size(); i++){
            for(int j=0; j<vv[i].size(); j++) cout<<vv[i][j]<<" ";
            cout<<endl;
      }
      return 0;
}