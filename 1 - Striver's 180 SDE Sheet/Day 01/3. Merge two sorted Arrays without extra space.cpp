#include <bits/stdc++.h>
using namespace std;

int main(){
      int n1,n2; cin>>n1>>n2;
      int a[n1>n2 ? n1 : n2], b[n1<n2 ? n1 : n2];
      n1=sizeof(a)/sizeof(a[0]), n2=sizeof(b)/sizeof(b[0]);
      for(int i=0; i<n1; i++) cin>>a[i];
      for(int i=0; i<n2; i++) cin>>b[n2];

      int  c=0;
      for(int i=0; i<n1; i++){
            if(a[i] > b[0]){
                  swap(a[i], b[0]);
                  int j=0;
                  while (j+1 < n2 && b[j]>b[j+1]) swap(b[j], b[j+1]);
            }
            else c++;
      }

      for(int i=0; i<n1; i++) cout<<a[i]<<" ";
      for(int i=0; i<n1; i++) cout<<b[i]<<" ";
      
      return 0;
}