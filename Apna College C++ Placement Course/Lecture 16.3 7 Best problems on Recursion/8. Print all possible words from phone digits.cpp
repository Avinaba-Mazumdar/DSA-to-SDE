#include <bits/stdc++.h>
using namespace std;

string S[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string t){
      if(s.size() == 0) cout<<t<<endl;
      else{
            char ch = s[0];
            string code = S[ch-'0'];
            string ros = s.substr(1);
            for(int i=0; i<code.size(); i++){
                  keypad(ros, t+code[i]);
            }
      }
}

int main(){
      string s; cin>>s;
      keypad(s, "");
      return 0;
}