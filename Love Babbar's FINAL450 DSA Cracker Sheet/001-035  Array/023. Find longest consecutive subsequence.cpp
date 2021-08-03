#include <bits/stdc++.h>
using namespace std;

int main(){
      int n; cin>>n;
      vector<int> v(n); for(int i=0; i<n; i++) cin>>v[i];
      set<int> hashSet; for(auto a : v) hashSet.insert(a);
      
      int longestStreak = 0;

      for(auto it : v){
            if(!hashSet.count(it-1)){
                  int currNum = it;
                  int currStreak = 1;

                  while(hashSet.count(currNum+1)){
                        currNum++;
                        currStreak++;
                  }
                  longestStreak = max(longestStreak, currStreak);
            }
      }
      cout<<"Longest Consecutive Subsequence : "<<longestStreak<<endl;
      return 0;
}