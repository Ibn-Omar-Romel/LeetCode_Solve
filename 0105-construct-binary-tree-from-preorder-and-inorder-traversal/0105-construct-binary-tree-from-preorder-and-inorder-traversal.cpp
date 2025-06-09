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

    TreeNode* Tree(vector<int>& preorder, vector<int>& inorder, int start, int end, int& index) {

        if (start > end)
            return NULL;

        int rootValue = preorder[index];
        int i = start;
        while( i <= end) {

            if (inorder[i] == rootValue) {
                break;
            }
            i++;
        }
        index++;

        TreeNode* root = new TreeNode(rootValue);

        root->left = Tree(preorder, inorder, start, i-1, index);
        root->right = Tree(preorder, inorder, i+1, end, index);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n = preorder.size();
        int index = 0;

        return Tree(preorder, inorder, 0, n-1, index);
    }
};