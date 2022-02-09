class Solution{
     public:void sortBySetBitCount(int arr[], int n){
          stable_sort(arr, arr+n, comp);
     }
     
     private: static bool comp(int a, int b){
          return __builtin_popcount(a) > __builtin_popcount(b);
     }
};

// Sorting
// TC: O(N * logN)
// SC:O(1)