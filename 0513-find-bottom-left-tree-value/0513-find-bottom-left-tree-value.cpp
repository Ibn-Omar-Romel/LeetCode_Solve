class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {

        queue<TreeNode*>que;
        que.push(root);

        int value = 0;
    
        while(!que.empty()) {
            int n = que.size();
            value = que.front()->val;

            while(n--) {
                TreeNode* node = que.front();
                que.pop();

                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }
        }
        return value;
    }
};