#include <bits/stdc++.h>
using namespace std;

int main(){
      int n; cin>>n;
      int a[n];
      for(int i=0; i<n; i++) cin>>a[i];

      int repeating, missing;
      for(int i=0; i<n; i++){
            if(a[abs(a[i]) - 1] < 0) repeating = abs(a[i]);
            else a[abs(a[i]) - 1] = -a[abs(a[i]) - 1];
      }

      for(int i=0; i<n; i++) if(a[i] > 0) missing = i+1;

      cout<<"Repeating: "<<repeating<<endl;
      cout<<"Missing: "<<missing<<endl;

      return 0;
}