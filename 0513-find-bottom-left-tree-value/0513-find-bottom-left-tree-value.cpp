class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {

        queue<TreeNode*>que;
        que.push(root);

        TreeNode* node = NULL;

        int value = 0;
        

        while(!que.empty()) {
            int n = que.size();
            bool flag = false;
            while(n--) {
                node = que.front();
                que.pop();

                if(!flag) {
                    value = node->val;
                    flag = true;
                }

                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }
        }
        return value;
    }
};