#include <bits/stdc++.h>
using  namespace std;

int main(){
     //taking input the array length and the array itself
     int n; cin>>n; int a[n];
     for (int i=0; i<n; i++) cin>>a[i];

     //rotating the array by one place to the right
     int temp = a[n-1];
     for (int i=n-1; i>0; i--) a[i]=a[i-1];
     a[0] = temp;
     for (int i=0; i<n; i++) cout<<a[i]<<" ";
     return 0;
}