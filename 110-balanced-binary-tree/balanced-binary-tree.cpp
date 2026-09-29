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
    int getHeight(TreeNode* root){
        if(root == NULL) return 0;

        int leftHeight = getHeight(root -> left);
        int rightHeight = getHeight(root -> right);
        int ans = max(leftHeight,rightHeight) + 1;

        return ans;
    }
    bool isBalanced(TreeNode* root) {

        if(root == NULL) return true;

        int leftheight = getHeight(root->left);
        int rightheight = getHeight(root->right);

        int absAns = abs(leftheight - rightheight);
        if(absAns > 1) return false;

        else{
            bool leftAns = isBalanced(root->left);
            bool rightAns = isBalanced(root->right);

            if(leftAns == true && rightAns == true) return true;
        }
        return false;

        
    }
};