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
        
        if (root == NULL) {
            return {};
        }

        queue<TreeNode*>que;
        que.push(root);

        vector<double>vec;

        while(!que.empty()) {
            int n = que.size();
            double value = 0.0;
            int temp = n;

            while(n--) {

                TreeNode* node = que.front();
                que.pop();

                value += (double)node->val;
                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }
            vec.push_back(value / (double)temp);
        }
        return vec;
    }
};