class Solution {
     public:
     bool checkInclusion(string s1, string s2) {
          int n = s2.size();
          int left=0, right=s1.size()-1;
          
          if(n < right+1) return false;
          
          vector<int> S1(26,0), S2(26,0);
          
          for(int i=0; i<=right; i++){
               S1[s1[i] - 'a']++;
               S2[s2[i] - 'a']++;
          }
          
          while(right < n){
               if(S1 == S2) return true;
               
               S2[s2[left] - 'a']--;
               left++;
               
               if(right < n-1){
                    right++;
                    S2[s2[right] - 'a']++;
               }
               else break;
          }
          
          return false;
     }
};

//TC: O(N+M)
//SC: O(N+M)