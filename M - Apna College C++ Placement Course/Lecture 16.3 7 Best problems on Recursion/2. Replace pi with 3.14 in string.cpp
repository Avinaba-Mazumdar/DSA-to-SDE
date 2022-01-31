#include <bits/stdc++.h>
using namespace std;

void pito(string s){
      if(s.size() == 0) return;

      if(s[0]=='p' && s[1]=='i'){
            cout<<"3.14";
            pito(s.substr(2));
      }
      else{
            cout<<s[0];
            pito(s.substr(1));
      }
}

int main(){
      string s; cin>>s;
      pito(s);
      return 0;
}