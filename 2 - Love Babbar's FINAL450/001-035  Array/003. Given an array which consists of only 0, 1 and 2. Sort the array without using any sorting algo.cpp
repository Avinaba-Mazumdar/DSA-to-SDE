#include <bits/stdc++.h>
using namespace std;

int main(){
     int n; cin>>n;
     int a[n], l=0, m=0, h=n-1;
     for (int i=0; i<n; i++) cin>>a[i];

     for(int i=0; i<n; i++) cout<<a[i];

     while(m <= h){
          if(a[m] == 0) swap(a[l++], a[m++]);
          if (a[m] == 1) m++;
          if (a[m] == 2) swap(a[m], a[h--]);
     }
     for(int i=0; i<n; i++) cout<<a[i];
     return 0;
}