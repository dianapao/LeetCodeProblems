/*Given the root of a binary tree, return its maximum depth.
A binary tree's maximum depth is the number of nodes along the longest path from the root node down 
   to the farthest leaf node.
Input: root = [3,9,20,null,null,15,7]
Output: 3

              3             with the return implementation               3    -> 3
            /   \                          ->                      /1+1      \  2+1
           9     20                                               1            2
                 / \                                             /\->0+1    /1+1  \ 1+1
                15  7                                           0 0        1       1
                                                                          /\0+1    /\ 0+1
                                                                          0 0      0 0 
   */
#include<bits/stdc++.h>
using namespace std;

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
    int maxDepth(TreeNode* root) {  
       if(root == nullptr){     //if it is a leaf or a root empty
           return 0;
       }
        
        int left = maxDepth(root->left);    //we get the height from bottom to top 
        int right = maxDepth(root->right);  //as in left side as in right side
        if(left >= right){  //if the height of left is greather or equals to the right
            return left + 1;    //return the current height + 1
        }else{
            return right +1;   
        }
        
    }
    
};
