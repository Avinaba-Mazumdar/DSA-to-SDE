#include <bits/stdc++.h>
using namespace std;

class Solution {
     public:
     int fib(int n) {
          if(n <= 1) return n;
          return fib(n-1) + fib(n-2);
     }
};

int main(){
     Solution obj;
     cout<<obj.fib(4)<<endl;
     
     return 0;
}

//TC: O(n)
//SC: O(1)