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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if (root) {
            dfs(root, "", result);
        }
        return result;
    }

private:
    void dfs(TreeNode* node, string path, vector<string>& result) {
        if (!node->left && !node->right) {
            result.push_back(path + to_string(node->val));
            return;
        }
        if (node->left) {
            dfs(node->left, path + to_string(node->val) + "->", result);
        }
        if (node->right) {
            dfs(node->right, path + to_string(node->val) + "->", result);
        }
    }
};