#define ll long long

class Solution{
     public:vector<ll> nextLargerElement(vector<ll> arr, int n){
          stack<ll> st;
          vector<ll> ans(n);
          
          for(int i=n-1; i>=0; i--){
               while(!st.empty() and st.top() <= arr[i]) st.pop();
               
               ans[i] = (st.empty()) ? -1 : st.top();
               st.push(arr[i]);
          }
          
          return ans;
     }
};