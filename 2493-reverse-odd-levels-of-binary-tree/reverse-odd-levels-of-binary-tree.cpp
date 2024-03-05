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
    void sol(TreeNode* left, TreeNode* right, int lvl) {
        if(left == NULL || right == NULL)
            return;
        
        if(lvl % 2 == 0) {
            int tempVal = left->val;
            left->val = right->val;
            right->val = tempVal;
        }

        sol(left->left, right->right, lvl+1);
        sol(left->right, right->left, lvl+1);
    }
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        sol(root->left, root->right, 0);
        
        return root;
    }
};