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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        if(!root) return ans;
        queue<TreeNode* > q{{root}};
        while(!q.empty()){
            auto cur = q.front(); q.pop();
            auto l = cur->left, r = cur->right;
            if(l){
                if(!l->left && !l->right) ans += l->val;
                else q.push(l);
            }
            if(r) q.push(r);
        }
        return ans;
    }
};