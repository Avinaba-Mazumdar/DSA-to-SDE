#include <bits/stdc++.h>
using namespace std;

void toH(int n, char src, char dest, char help){
      if (n==0) return;

      toH(n-1, src, help, dest);
      cout<<"Move from "<<src<<" to "<<dest<<endl;
      toH(n-1, help, dest, src);
}

int main(){
      int n; cin>>n;
      char src, dest, help; cin>>src>>dest>>help;
      toH(n, src, dest, help);
      return 0;
}