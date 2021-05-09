// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//      int n; cin>>n; int a[n];
//      for (int i=0; i<n; i++) cin>>a[i];

//      int sum=0;
//      for (int i=0; i<=sum; i++){
//           sum += a[i];
          
//      }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--){
        int n, totaL=0, cw, bg; cin>>n;
        string nation, Aa; cin>>nation;
        while (n--){
            cin>>Aa>>cw;
            totaL += 300 + 20 - cw;
            cin>>Aa;
            totaL += 300;
            cin>>Aa>>bg;
            totaL += bg;
            cin>>Aa;
            totaL += 50;
        }
        if (nation == "INDIAN") cout<<totaL/200<<endl;
        else if (nation == "NOT_INDIAN") cout<<totaL/400<<endl;
    }
    return 0;
}