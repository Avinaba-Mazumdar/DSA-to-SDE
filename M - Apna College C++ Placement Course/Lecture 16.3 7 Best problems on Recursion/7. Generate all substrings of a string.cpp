#include <bits/stdc++.h>
using namespace std;

void subStr(string s, string t){
      if(s.length()==0) cout<<t<<endl;
      else{
            char ch=s[0];
            int code = ch;
            string ros = s.substr(1);

            subStr(ros, t);
            subStr(ros, t+ch);
            subStr(ros, t+to_string(code));
      }
}

int main(){
      string s; cin>>s;
      subStr(s, "");
      return 0;
}