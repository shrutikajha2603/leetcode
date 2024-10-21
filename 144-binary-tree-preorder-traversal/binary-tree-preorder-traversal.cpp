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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        stack<TreeNode*> nodes;

        if(root==nullptr){
            return preorder;
        }
        nodes.push(root);

        while(!nodes.empty()){
            root=nodes.top();
            nodes.pop();
            preorder.push_back(root->val);

            if(root->right!=nullptr){
                nodes.push(root->right);
            }
            if(root->left!=nullptr){
                nodes.push(root->left);
            }
        }
        return preorder;
    }
};