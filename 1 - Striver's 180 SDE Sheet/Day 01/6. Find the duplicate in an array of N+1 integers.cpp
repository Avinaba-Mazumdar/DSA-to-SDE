#include <bits/stdc++.h>
using namespace std;

int main(){
      int n; cin>>n;
      vector<int> nums(n); for(int i=0; i<n; i++) cin>>nums[i];
      map<int,int> m;
        for(int i=0;i<n;i++) {
            m[nums.at(i)]++;
            if(m[nums.at(i)]>1) {
                cout<<nums.at(i);
                break;
            }
        }
        return 0;
}