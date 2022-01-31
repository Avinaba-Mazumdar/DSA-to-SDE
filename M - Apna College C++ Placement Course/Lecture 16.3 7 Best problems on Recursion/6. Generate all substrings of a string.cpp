#include <bits/stdc++.h>
using namespace std;

void subStr(string t, int i, int n, string s){
      if(i==n) cout<<t<<endl;
      else{
            subStr(t, i+1, n, s);
            t = t+s[i];
            subStr(t, i+1, n, s);
      }
}

int main(){
      string s; cin>>s;
      subStr("", 0, s.size(), s);
      return 0;
}