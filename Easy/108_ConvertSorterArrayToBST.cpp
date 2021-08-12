/*108. Convert Sorted Array to Binary Search Tree	
		https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
  Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced 
  		binary search tree.
  A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never 
  		differs by more than one.
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:
			 0								  0
		   /   \							/   \
		-3		9						 -10      5
	   /	  /								\		\
   -10		5								 -3		  9

   SOLUTION EXPLANATION: to have a balanced tree is more easy sort the array y after note the next example
   		  [1 2 3 4 5 6 7 8 9]
				   5
			    /     \				
			  2  	   7
			 / \	  / \
			1   3    6	 8
			 	 \		  \
			 	  4 	   9
		note that doing a recursive function where we obtain the middle indice of the array is a node and its
		left digits are part of its left subtree and the right digits are part of the right subtree
		for example 5->middle so is root
		now the middle of the left part [1 2 3 4] is 2 that is also a root
		now the middle of the next left 2nd part [1] is 1 so is a root
		but the middle right of the 2nd part [3 4] is 3 so is a root	and so on*/
	

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
		//Function required
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        sort(nums.begin(), nums.end());		//sort the array 
        TreeNode* root = insertValues(nums, 0, nums.size()-1);	//left=0 && right=last indice in the array
        return root;
    }
    
    TreeNode *insertValues(vector<int> nums, int left, int right){
        if(left > right) 
            return NULL;
        int mid = left + (right-left)/2;		//we obtain the middle
        TreeNode* root = new TreeNode(nums[mid]);	//we create a root node with the middle value
        root->left = insertValues(nums, left, mid-1);	//now we asign the new root corresponding to left side values
        root->right = insertValues(nums, mid+1, right);	//& equals we do the right subtree with the 2nd middle of elements
        
        return root;
    }
};