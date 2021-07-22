/*Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
Input: root = [1,2,2,3,4,4,3]
Output: true
          1
        /  \
       2    2
      / \  / \
     3   4 4  3
Input: root = [1,2,2,null,3,null,3]
Output: false
          1
        /   \
       2     2
        \     \ 
         3     3
https://leetcode.com/problems/symmetric-tree/               */

struct TreeNode {
   int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return (subTreeSymmetric(root->left,root->right));  //We need a function to compare the two sades
    }
    
    bool subTreeSymmetric(TreeNode *subTreeA, TreeNode *subTreeB){
        if((subTreeA==NULL && subTreeB!=NULL) || (subTreeA!=NULL && subTreeB==NULL)){
            return false;       //If the subtrees are diferents structurally is false
        }else if(subTreeA == NULL && subTreeB == NULL){
            return true;    
        }
        
        if(subTreeA->val == subTreeB->val){     //is have the same values the current nodes
            bool outside = subTreeSymmetric(subTreeA->left, subTreeB->right);   //get the nodes of the edges
            bool inside = subTreeSymmetric(subTreeA->right, subTreeB->left);    //get the intern nodes
            
            return (outside && inside);
        }else{
            return false;
        }
    }
    
};