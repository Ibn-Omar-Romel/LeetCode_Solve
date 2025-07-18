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
    vector<int> rightSideView(TreeNode* root) {

        if (root == NULL) // Empty Node
            return {};
        
        vector<int>result;
        queue<TreeNode*> que; // For level order, we use queue

        que.push(root); // pushing the root


        while(!que.empty()) {
            int n = que.size(); // number of nodes in each level
            TreeNode* node = NULL;
            while(n--) {
                node = que.front(); // current node
                que.pop();
                if (node->left != NULL)
                    que.push(node->left);
                if (node->right != NULL)
                    que.push(node->right);
            } 
            result.push_back(node->val); // last node will be the rightest node
        }
        return result;
    }
};