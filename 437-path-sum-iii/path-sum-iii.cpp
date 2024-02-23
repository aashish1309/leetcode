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
    int sumof_path(TreeNode* root,long long targetSum){
        if(!root) return 0;
        int ans=0;
        targetSum=targetSum-root->val;
        if(targetSum==0){
            ans++;
        }
        return ans=ans+sumof_path(root->right,targetSum)+sumof_path(root->left,targetSum);

    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return 0;
        }
        return pathSum(root->left,targetSum)+sumof_path(root,targetSum)+pathSum(root->right,targetSum);
    }
};