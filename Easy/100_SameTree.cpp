/*
Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Input: p = [1,2,3], q = [1,2,3]
Output: true

Input: p = [1,2], q = [1,null,2]
Output: false

https://leetcode.com/problems/same-tree/
*/

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if( (p==NULL && q!=NULL) || (p!=NULL && q==NULL) ){ //if one is null and the other no is false
            return false;
        }else if(p==NULL && q==NULL){   //is the root are null then is true
            return true;
        }
        
        if(q->val != p->val){   //if its values are diferent is false
            return false;
        }
        
        return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));    //And operation of the same node
    }
};