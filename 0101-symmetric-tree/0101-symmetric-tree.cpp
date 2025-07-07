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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr){
            return true;
        }

        TreeNode* temp = invertTree(root->right);

        return isSameTree(root->left, temp);
    }

    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr){
            return root;
        }

        if(root->left == nullptr && root->right == nullptr){
            return root;
        }

        else if(root->left == nullptr){
            root->left = root->right;
            root->right = nullptr;

            invertTree(root->left);
            return root;
        }

        else if(root->right == nullptr){
            root->right = root->left;
            root->left = nullptr;

            invertTree(root->right);
            return root;
        }

        else{
            TreeNode* temp;
            temp = root->left;
            root->left = root->right;
            root->right = temp;

            invertTree(root->left);
            invertTree(root->right);
            return root;
        }

    }

    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p == nullptr && q == nullptr){
            return true;
        }

        else if(p == nullptr || q == nullptr){
            return false;
        }

        else if(p->val != q->val){
            return false;
        }
        
        return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};