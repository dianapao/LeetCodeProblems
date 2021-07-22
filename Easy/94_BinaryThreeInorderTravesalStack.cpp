/*
    THIS VERSION IS A MODIFATION OF THE 1ST, this is not recursive, here we use a stack (LIFO)
    
Given the root of a binary tree, return the inorder traversal of its nodes' values.
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
        vector<int> listFinal;  
        stack<TreeNode *> stackOfNodes;
        TreeNode *current = root;
        
        while( current!=NULL || !stackOfNodes.empty() ){   
           while(current != NULL){
               stackOfNodes.push(current);  //add the current node and
               current = current->left;     //go to the left child until the end
           }
            current = stackOfNodes.top();   //get the node of the top of the stack
            stackOfNodes.pop();             //and delete that node 

            listFinal.push_back(current->val);  //add the value of the node at the vector answer
            
            current = current->right;   //and now we go to the right child
        }
        
        return listFinal; 
    }
    
};

int main(){
    return 0;
}