#include <bits/stdc++.h>
using namespace std;

int main(){
      string str; cin>>str;
      transform(str.begin(), str.end(), str.begin(), ::toupper);
      int a[26]; for(int i=0; i<26; i++) a[i] = 0;

      for(int i=0; i<str.size(); i++) a[str[i]-'a']++;
      
      char ans='a'; int maxi=0;

      for(int i=0; i<26; i++){
            if(a[i] > maxi){
                  maxi = a[i];
                  ans = i + 'a';
            }
      }
      cout<<maxi<<" "<<ans<<endl;

      return 0;
}