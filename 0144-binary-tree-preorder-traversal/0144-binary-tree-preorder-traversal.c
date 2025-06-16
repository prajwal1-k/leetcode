/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void preorder(struct TreeNode* root, int* res, int* index){
    if(root == NULL) return;

    res[(*index)++] = root->val;
    preorder(root->left, res, index); // traverse left
    preorder(root->right, res, index); // traverse right
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    // allocate the memory to store the result
    int* result = (int*)malloc(100 * sizeof(int));
    *returnSize = 0;

    preorder(root, result, returnSize);
    return result;;
}