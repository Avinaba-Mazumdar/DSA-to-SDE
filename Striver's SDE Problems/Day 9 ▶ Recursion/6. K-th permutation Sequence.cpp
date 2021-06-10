#include <bits/stdc++.h>
using namespace std;

int main(){
      int n,k; cin>>n>>k;
      int fact=1;
        vector<int> numbers;
        for(int i=1; i<n; i++){
            fact = fact*i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        string ans = "";
        k--;
        while(true){
            ans = ans + to_string(numbers[k/fact]);
            numbers.erase(numbers.begin() + k/fact);
            if(numbers.size()==0) break;
            fact = fact/numbers.size();
            k = k % fact;
        }
        cout<<ans;
        return 0;
}