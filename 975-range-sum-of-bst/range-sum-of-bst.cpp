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
    void postorder(TreeNode* root, vector<int>& arr) {
        if (root == NULL)
            return;

        postorder(root->left, arr);
        postorder(root->right, arr);
        arr.push_back(root->val);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> arr;

        postorder(root, arr);

        int sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > low && arr[i] < high) {
                sum += arr[i];
            }
        }

        return low + high + sum;
    }
};