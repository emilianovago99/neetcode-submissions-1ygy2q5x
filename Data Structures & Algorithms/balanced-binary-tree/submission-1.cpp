/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    int altura(TreeNode* root) {
  
    if (root == nullptr)
        return 0;

    return 1 + max(altura(root->left), 
                   altura(root->right));
}

    bool isBalanced(TreeNode* root) {
        if(!root)
            return 1;
    
    int altR = altura(root->right);
    int altL = altura(root->left);

    if(abs(altR - altL) > 1)
        return 0;


    return isBalanced(root->left) && isBalanced(root->right);

    }
};
