class Solution {
     public:string longestPalindrome(string s) {
          int n = s.size();
          if(n==0 or n==1) return s;
          int start=0, size=0;
          
          for(int i=0; i<n; i++){
               int len = max(expand(s, i, i), expand(s, i-1, i));
               
               if(len > size){
                    size = len;
                    start = i - len/2;
               }
          }
          
          return s.substr(start, size);
     }
     
     private:int expand(string s, int left, int right){
          while(left>=0 and right<s.size() and s[left]==s[right]){
               left--;
               right++;
          }
          return right - left - 1;
     }
};

TC: O(N * N)
SC: O(1)