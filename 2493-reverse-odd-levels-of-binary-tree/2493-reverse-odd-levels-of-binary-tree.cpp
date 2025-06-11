class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        if (!root)
            return NULL;
        
        queue<TreeNode*>que;
        que.push(root);

        int level = 0;

        while(!que.empty()) {
            
            int n = que.size();
            vector<TreeNode*>vec;

            for (int i = 0; i < n; i++) {
                TreeNode* node = que.front();
                que.pop();

                vec.push_back(node);

                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }

            if (level % 2 == 1) {
                int i = 0, j = n-1;
                while(i < j) {
                    swap(vec[i]->val, vec[j]->val);
                    i++;
                    j--;
                }
            }
            level++;
        }
        return root;
    }
};