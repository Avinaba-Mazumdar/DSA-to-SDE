#include <bits/stdc++.h>
using namespace std;

int main(){
      int n1, n2, n3; cin>>n1>>n2>>n3;
      int A[n1], B[n2], C[n3];
      for(int i=0; i<n1; i++) cin>>A[i];
      for(int i=0; i<n2; i++) cin>>B[i];
      for(int i=0; i<n3; i++) cin>>C[i];

      vector<int> v;
      int i=0, j=0, k=0;
      while(n1>i and n2>j and n3>k){
            if(A[i]==B[j] and B[j]==C[k]){
                  int ele = A[i];
                  v.push_back(ele);
                  while(i<n1 and A[i]==ele) i++;
                  while(j<n2 and B[j]==ele) j++;
                  while(k<n3 and C[k]==ele) k++;
            }
            else if(A[i] < B[j]) i++;
            else if(B[j] < C[k]) j++;
            else k++;
      }
        
      for(int i=0; i<v.size(); i++) {
            cout<<v[i]<<" ";
      }
      cout<<endl;
      return 0;
}