#include <bits/stdc++.h>
using namespace std;

int main(){
     int n; cin>>n;
     int a[n], l=0,m=0;
     for (int i=0; i<n; i++) cin>>a[i];
     while(m<n){
          if (a[m]<0) swap(a[m++], a[l++]);
          else m++;
     }
     for(int i=0; i<n; i++) cout<<a[i]<<" ";
     return 0;
}