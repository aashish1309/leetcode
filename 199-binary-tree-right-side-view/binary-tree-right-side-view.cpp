class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            int val = 0;
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                val = node->val; 
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            result.push_back(val); 
        }
        return result;
    }
};
