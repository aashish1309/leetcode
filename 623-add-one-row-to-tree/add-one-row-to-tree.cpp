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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* node = new TreeNode(val);
            node->left = root;
            return node;
        }
        queue<TreeNode*> q;
        q.push(root);
        int level = depth - 1;
        while (!q.empty()) {
            int size = q.size();
            level--;
            for (int i = 0; i < size; i++) {
                TreeNode* curr = q.front();
                q.pop();
                if (level == 0) {
                    TreeNode* lefty = curr->left;
                    TreeNode* righty = curr->right;
                    TreeNode* newLeft = new TreeNode(val);
                    TreeNode* newRight = new TreeNode(val);
                    curr->left = newLeft;
                    curr->right = newRight;
                    newLeft->left = lefty;
                    newRight->right = righty;
                } else if (level > 0) {
                    if (curr->left) q.push(curr->left);
                    if (curr->right) q.push(curr->right);
                } else {
                    break;
                }
            }
        }
        return root;
    }
};