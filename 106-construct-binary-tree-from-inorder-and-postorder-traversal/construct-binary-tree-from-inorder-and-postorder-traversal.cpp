class Solution {
public:
     int getIndex(int element , vector<int>&arr){
        for(int i =0; i < arr.size();i++){
            if(arr[i]==element) return i;
        }
        return -1;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder ,int inorderStart, int inorderEnd,int &postorderIndex){
        if(postorderIndex < 0) return NULL;
        if(inorderStart > inorderEnd) return NULL;

        int element = postorder[postorderIndex];
        postorderIndex--;

        TreeNode* root = new TreeNode(element);
        int elementIndexinsideInorder = getIndex(element,inorder);

        root -> right =buildTree(inorder,postorder,elementIndexinsideInorder + 1, inorderEnd,postorderIndex);

        root -> left =buildTree( inorder,postorder,inorderStart,elementIndexinsideInorder - 1,postorderIndex );
        
        return root;

    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int inorderStart=0,postorderIndex = postorder.size()-1,inorderEnd = inorder.size()-1;
        TreeNode * root = buildTree(inorder,postorder,inorderStart,inorderEnd,postorderIndex);
        return root;
        
    }
};