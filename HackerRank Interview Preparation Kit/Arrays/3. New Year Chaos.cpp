#include <bits/stdc++.h>
using namespace std;

void bribe(){
      int n, bribes = 0; cin>>n;
      int a[n]; a[n]; for(int i=0; i<n; i++) cin>>a[i];

      for(int i=n-1; i>=0; i--){
            if(a[i] != i+1){
                  if(i-1>=0 && a[i-1]==i+1){
                        bribes++;
                        a[i-1] = a[i];
                        a[i] = i+1;
                  }
                  else if(i-2>=0 && a[i-2]==i+1){
                        bribes += 2;
                        a[i-2] = a[i-1];
                        a[i-1] = a[i];
                        a[i] = i+1;
                  }
                  else{
                        cout<<"Too Chaotic"<<endl;
                        return ;
                  }
            }
      }
      cout<<bribes<<endl;
      return ;
}

int main(){
      int t; cin>>t;
      for(int i=0; i<t; i++){
           bribe();
      }
}