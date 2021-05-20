#include <bits/stdc++.h>
using namespace std;

//Reversed Kadane's Algorithm

int kadane(int a[], int n){
      int currSum = 0, maxSum = INT_MIN;

      for(int i=0; i<n; i++){
            currSum += a[i];
            if(currSum < 0) currSum = 0;
            maxSum = max(maxSum, currSum);
      }
      return maxSum;
}

int main(){
      int n; cin>>n;
      int a[n]; for(int i=0; i<n; i++) cin>>a[i];

      int wrapsum, totalsum=0;

      for(int i=0; i<n; i++){
            totalsum += a[i];
            a[i] = -a[i];
      }

      wrapsum = totalsum + kadane(a, n);
      cout<<wrapsum<<endl;

      return 0;
}