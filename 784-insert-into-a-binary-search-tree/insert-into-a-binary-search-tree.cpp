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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode = new TreeNode(val);
        if(!root) return newNode;
        TreeNode* current = root;
        while(current){
            if(current->val<val){
                if(current->right==NULL){
                    current->right=newNode;
                    break;
                }
                current=current->right;
            }
            if(current->val>val){
                if(current->left==NULL){
                    current->left=newNode;
                    break;
                }current=current->left;
            }
        }
        return root;
    }
};