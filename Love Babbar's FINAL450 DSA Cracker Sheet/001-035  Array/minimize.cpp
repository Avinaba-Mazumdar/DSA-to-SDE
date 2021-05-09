#include <bits/stdc++.h>
using namespace std;

int main(){
     int k,n; cin>>k>>n;
     int a[n]; for (int i=0; i<n; i++) cin>>a[i];
     sort(a,a+n);
     a[0]=a[0]+2; a[n-1]=a[n-1] - 2;
     cout<<a[n-1] - a[0]<<endl;
}