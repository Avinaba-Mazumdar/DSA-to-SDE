#include <bits/stdc++.h>
using namespace std;

//GOOGLE Kickstart

int main(){
      int n; cin>>n;
      int a[n+1]; for(int i=0; i<n; i++) cin>>a[i];
      a[n]=INT_MIN;

      if(n==1){
            cout<<1<<endl;
            return 0;
      }

      int mx = INT_MIN;
      int rbd=0;
      for(int i=0; i<n; i++){
            if (a[i] > mx && a[i]>a[i+1]) rbd++;
            mx = max(mx, a[i]);
      }
      cout<<rbd<<endl;
      return 0;
}