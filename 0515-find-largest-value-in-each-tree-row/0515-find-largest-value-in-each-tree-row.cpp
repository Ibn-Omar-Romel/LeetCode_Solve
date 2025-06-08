class Solution {
public:
    vector<int> largestValues(TreeNode* root) {

        if (root == NULL)
            return {};
        queue<TreeNode*> que;
        que.push(root);
        vector<int> vec;
        while (!que.empty()) {
            int n = que.size();
            int value = INT_MIN;
            while (n--) {
                TreeNode* node = que.front();
                que.pop();
                value = max(value, node->val);
                if (node->left)
                    que.push(node->left);
                if (node->right)
                    que.push(node->right);
            }
            vec.push_back(value);
        }
        return vec;
    }
};