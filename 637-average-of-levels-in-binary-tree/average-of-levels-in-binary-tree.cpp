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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode* temp=root;
        vector<double> vec;
        double avg=0;
        q.push(temp);
        double sum=0;
        while(!q.empty()){
            int len=q.size();
            sum=0;
            for(int i=0;i<len;i++){
                temp=q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            avg=sum/len;
            vec.push_back(avg);
        }
        return vec;
    }
};