#include <bits/stdc++.h>
using namespace std;

bool chkPalin(string s, int st, int en){
      while(st <= en){
            if(s[st++] != s[en--]) return false;
      }
      return true;
}

void run(int ind, string s, vector<string> &v, vector<vector<string>> &vv){
      if(ind == s.size()){
            vv.push_back(v);
            return ;
      }
      for(int i=ind; i<s.size(); i++){
            if(chkPalin(s, ind, i)){
                  v.push_back(s.substr(ind, i-ind+1));
                  run(i+1, s, v, vv);
                  v.pop_back();
            }
      }
}

int main(){
      string s; cin>>s;
      vector<vector<string>> vv;
      vector<string> v;
      run(0, s, v, vv);
      for(int i=0; i<vv.size(); i++){
            for(int j=0; j<vv[i].size(); j++) cout<<vv[i][j]<<" ";
            cout<<endl;
      }
      return 0;
}