#include <bits/stdc++.h>
using  namespace std;

int main(){
     //taking input the array length and the array itself
     int n; cin>>n; int a[n];
     for (int i=0; i<n; i++) cin>>a[i];

     //applyting Kadane's algorithm
     int currSum=0, maxSum=INT_MIN;
     for (int i=0; i<n; i++){
          currSum += a[i];
          if(currSum < 0) currSum = 0;
          maxSum = max(maxSum, currSum);
     }
     cout<<maxSum<<endl;
}