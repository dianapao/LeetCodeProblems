/*Given the root of a binary tree, return the inorder traversal of its nodes' values.
Example: 
Input: root = [1,null,2,3]
Output: [1,3,2]

Input: root = []
Output: []

Input: root = [1,2]
Output: [2,1]

Input: root = [1,null,2]
Output: [1,2]

Constraints: 
The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100     */
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
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> listOfNodes;    //we declare the empty list of vectors
        nodesInorder(root, listOfNodes);    //Call of the function to travesal inorder the three 
        
        return listOfNodes; 
    }
    
    void nodesInorder(TreeNode *root, vector<int> &listOfNodes){    //list by reference to modify it
        if(root == NULL){
            return;     //return the empty list
        }
        
        nodesInorder(root->left, listOfNodes);      //first we go to the left child
        listOfNodes.push_back(root->val);           //when we arrive to the end of the leftmost child, added its value
        
        nodesInorder(root->right, listOfNodes);     //then go to the right child
    }
};

int main(){
    return 0;
}