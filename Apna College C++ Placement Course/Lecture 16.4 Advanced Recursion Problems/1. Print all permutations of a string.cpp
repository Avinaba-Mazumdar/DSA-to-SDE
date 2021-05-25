#include <bits/stdc++.h>
using namespace std;

void permute(string s, string t){
      if(s.size() == 0) cout<<t<<endl; 
      else{
            for(int i=0; i<s.size(); i++){
                  char ch = s[i];
                  string ros = s.substr(0, i) + s.substr(i+1);
                  permute(ros, t+ch);
            }
      }
}

int main(){
      string s; cin>>s;
      permute(s, "");
      return 0;
}