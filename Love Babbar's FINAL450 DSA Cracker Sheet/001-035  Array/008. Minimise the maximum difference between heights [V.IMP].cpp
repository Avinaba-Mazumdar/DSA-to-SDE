#include <bits/stdc++.h>
using namespace std;

int  main(){
      int k, n; cin>>k>>n;
      int arr[n]; for(int i=0; i<n; i++) cin>>arr[i];
      sort(arr, arr+n);
      int ans = arr[n-1]-arr[0];
       int mini, maxi;

      for(int i=0; i<n-1; i++){
            if(arr[i] >= k){
                  mini = min(arr[0]+k, arr[i]-k);
                  maxi = max(arr[n-1]-k,arr[i-1]+k);
                  ans = min(ans, maxi-mini);
            }
            else continue;
      }
      return ans;
}