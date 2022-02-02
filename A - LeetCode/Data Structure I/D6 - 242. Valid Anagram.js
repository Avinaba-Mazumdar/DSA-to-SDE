class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        int n = s.size();
        unordered_map<char, int> map;
        
        for(int i=0; i<n; i++){
            map[s[i]]++;
        }
        for(int i=0; i<n; i++){
            if(map[t[i]] == 0) return false;
            else map[t[i]]--;
        }
        
        return true;
    }
};

//TC: O(N)
// SC: O(N)