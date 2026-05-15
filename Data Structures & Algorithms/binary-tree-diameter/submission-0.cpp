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
    int diameterOfBinaryTree(TreeNode* root) {
         if(!root)
            return 0;
    
    int altR = altura(root->right);
    int altL = altura(root->left);

    int dial = diameterOfBinaryTree(root->left);
    int diar = diameterOfBinaryTree(root->right);

    return max({altL + altR, dial, diar});

    }
};
