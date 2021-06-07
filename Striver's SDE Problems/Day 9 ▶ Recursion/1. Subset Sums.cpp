#include <bits/stdc++.h>
using namespace std;

void subsetSum(int i, int sum, vector<int> v, int n, vector<int> &a){
      if(i == n){
            a.push_back(sum);
            return ;
      }
      subsetSum(i+1, sum+v[i], v, n, a);
      subsetSum(i+1, sum, v, n, a);
}

int main(){
      int n; cin>>n;
      vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
      vector<int> a;
      subsetSum(0, 0, v, n, a);

      sort(a.begin(), a.end());
      for(auto i : a) cout<<i<<" ";

      return 0;
}