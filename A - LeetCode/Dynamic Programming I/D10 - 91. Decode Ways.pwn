class Solution {
     public:int numDecodings(string s) {
          int n = s.size();
          if(n==0 or s[0]=='0') return 0;
          int prev=0, prevAns=1, ans=1;
          
          for(int i=1; i<n; i++){
               prev = ans;
               if(s[i] == '0') ans = 0;
               if(s[i-1]=='1' or (s[i-1]=='2' and s[i]<'7')) ans += prevAns;
               prevAns = prev;
          }
          
          return ans;
     }
};

TC: O(N)
SC: O(1)