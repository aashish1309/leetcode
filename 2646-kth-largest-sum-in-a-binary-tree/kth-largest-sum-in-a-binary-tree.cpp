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
    long long kthLargestLevelSum(TreeNode* root, int k) {
    //if (!root) return 0;

    queue<TreeNode*> q;
    q.push(root);
    vector<long long> vec;

    while (!q.empty()) {
        int len = q.size();
        long long currsum = 0;

        for (int i = 0; i < len; i++) {
            TreeNode* node = q.front();
            q.pop();
            currsum += node->val;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }

        vec.push_back(currsum);
    }
    if(vec.size()<k) return -1;
    sort(vec.begin(), vec.end(), greater<long long>());
    return vec[k - 1];
}

    };