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
    int countNodes(TreeNode* root) {
        if (!root) {
            return 0;
        }

        int leftHeight = 0;
        TreeNode* leftNode = root;

        while (leftNode->left) {
            leftNode = leftNode->left;
            leftHeight++;
        }

        int rightHeight = 0;
        TreeNode* rightNode = root;

        while (rightNode->right) {
            rightNode = rightNode->right;
            rightHeight++;
        }

        if (leftHeight == rightHeight) {
            return (1 << (leftHeight + 1)) - 1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};