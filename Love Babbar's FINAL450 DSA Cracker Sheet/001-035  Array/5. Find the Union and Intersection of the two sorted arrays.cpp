// a = [1,2,3,4,5]
// b = [1,2,3]
// union = list(set(a+b))
// intersection = list(filter(lambda x: x in a, b))
// print (union)
// print (intersection)

#include <bits/stdc++.h>
using namespace std;

int main(){
      int a[] = {1,2,3,4,5};
      int b[] = {1,2,3};

      int l1 = sizeof(a)/sizeof(a[0]), l2 = sizeof(a)/sizeof(a[0]);
      int L = (l1 > l2 ? l1 : l2);

      int c[L];
      sort(a, a+l1); sort(b, b+l2);

      for(int i=0; i<L; i++){
            
      }
}