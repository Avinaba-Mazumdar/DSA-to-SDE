#include <bits/stdc++.h>
using namespace std;

int main(){
      int n,k; cin>>n>>k;
      int arr[n]; for(int i=0; i<n; i++) cin>>arr[i];

      unordered_map<int, int> m;
      for(int i=0; i<n; i++) m[arr[i]]++;

      for(auto it : m)
            if(it.second > (n/k)) cout<<it.first<<endl;

      return 0;
}