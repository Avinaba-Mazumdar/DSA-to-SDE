#include <bits/stdc++.h>
using namespace std;

//Need Sorted Array

int main(){
      int n, k; cin>>n>>k;
      int a[n]; for(int i=0; i<n; i++) cin>>a[i];

      sort(a, a+n);
      int st=0, en=n-1;

      while(st<=en){
            if(a[st] + a[en] == k){
                  cout<<st<<" "<<en<<endl;
                  return 0;
            }
            if(a[st] + a[en] < k) st++;
            if(a[st] + a[en] > k) en--;
      }

      cout<<-1<<endl;
      return 0;
}