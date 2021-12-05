class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        
        for(int i=0; i<n; i++){
            string str = "";
            while(i<n and s[i]!=' ')
                str += s[i++];
            reverse(str.begin(), str.end());
            ans += str;
            
            if(i+1 < n) ans += ' ';
        }
        
        return ans;
    }
};

//TC: O(N)
//SC: O(N)