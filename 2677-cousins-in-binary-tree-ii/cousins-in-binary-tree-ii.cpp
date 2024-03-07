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
    TreeNode* replaceValueInTree(TreeNode* root) {
        //chalo isko attempt karte hain using the algorithm ofbfs
        queue<TreeNode*> q;
        int level_sum=root->val;
        root->val=-1*root->val;
        q.push(root);
        while(!q.empty()){
            //we go level wise in this question
            int sum=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                //settle this 
                node->val=node->val+level_sum;
                int ldata=(node->left?node->left->val:0);
                int rdata=(node->right?node->right->val:0);
                sum+=ldata+rdata;
                if(node->left){
                    q.push(node->left);
                    node->left->val=-(ldata+rdata);
                }
                if(node->right){
                    q.push(node->right);
                    node->right->val=-(rdata+ldata);
                }
            }
            level_sum=sum;
        }
        return root;
    }
};