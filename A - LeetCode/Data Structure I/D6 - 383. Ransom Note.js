class Solution {
    public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = magazine.size(), m = ransomNote.size();
        unordered_map<char, int> map;
        
        for(int i=0; i<n; i++) map[magazine[i]]++;
        
        for(int i=0; i<m; i++){
            if(map[ransomNote[i]] == 0) return false;
            else map[ransomNote[i]]--;
        }
        
        return true;
    }
};

//TC: (N+M)
// SC: (N)