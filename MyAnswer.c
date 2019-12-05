/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2){
    struct TreeNode *TreeNotePtr = malloc(sizeof(struct TreeNode));
    int LeftVal = 0, RightVal = 0;
    struct TreeNode *t1LeftTree = NULL, *t1RightTree = NULL;
    struct TreeNode *t2LeftTree = NULL, *t2RightTree = NULL;

    
    if (t1 == NULL && t2 == NULL){
        return NULL;
    }
    if (t1 != NULL){
        LeftVal = t1->val;
        t1LeftTree = t1->left;
        t1RightTree = t1->right;
    }
    if (t2 != NULL){
        RightVal = t2->val;
        t2LeftTree = t2->left;
        t2RightTree = t2->right;
    }
    
    TreeNotePtr->val = LeftVal + RightVal;
    TreeNotePtr->left = mergeTrees(t1LeftTree, t2LeftTree);
    TreeNotePtr->right = mergeTrees(t1RightTree, t2RightTree);
    return TreeNotePtr;
}

