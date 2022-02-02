class Solution {
     public:vector<vector<int>> generate(int numRows) {
          vector<vector<int>> ans;
          ans.push_back({1});
          
          for(int i=1; i<numRows; i++){
               vector<int> temp(i+1, 1);
               for(int j=1; j<i; j++){
                    temp[j] = ans.back()[j-1] + ans.back()[j];
               }
               ans.push_back(temp);
          }
          
          return ans;
     }
};

TC: O(N * N)
SC: O(N * N)