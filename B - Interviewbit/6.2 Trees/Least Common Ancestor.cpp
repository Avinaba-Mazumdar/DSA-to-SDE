#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool find(TreeNode* root, int val){
      if (!root)
            return false;
      if (root->val == val)
            return true;
      if ((root->left && find(root->left, val)) || (root->right && find(root->right, val)))
            return true;
      return false;
}

TreeNode* lowestCommonAncestor(TreeNode *root, int p, int q){
      if(root==nullptr || root->val==p || root->val==q) return root;

      TreeNode *left = lowestCommonAncestor(root->left, p, q);
      TreeNode *right = lowestCommonAncestor(root->right, p, q);
      
      if(left == nullptr) return right;
      if(right == nullptr) return left;
        
      return root;
}

int lca(TreeNode* root, int B, int C) {
      if (root == nullptr) return -1;
      TreeNode *ans = lowestCommonAncestor(root, B, C);
      return (ans->val ? ans->val : -1);
}

int main(){

      return 0;
}