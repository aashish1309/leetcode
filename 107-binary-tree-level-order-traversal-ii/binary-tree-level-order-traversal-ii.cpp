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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         queue<TreeNode*> q;
        vector<vector<int>> v1;
        if(!root){
            return v1;
        }
        int lev=0;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            vector<int> v2;
            for(int i=0;i<len;i++){
                TreeNode* node=q.front();
                q.pop();
                v2.push_back(node->val);
                if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
            
            }
            v1.push_back(v2);
        }
        reverse(v1.begin(),v1.end());
        return v1;
    }
};