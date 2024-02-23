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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int maxsum=INT_MIN,currlevel=1,ans=1;
        while(!q.empty()){
            int currsum=0,len=q.size();
            while(len--){
            TreeNode* Node=q.front();
            q.pop();
            currsum+=Node->val;

            if(Node->left)
            q.push(Node->left);
            if(Node->right)
            q.push(Node->right);
            }
        if(currsum>maxsum){
            maxsum=currsum;
            ans=currlevel;
        }
        currlevel++;
    }
    return ans;
    }
};