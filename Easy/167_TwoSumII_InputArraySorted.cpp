/*Given an array of integers numbers that is already sorted in non-decreasing order, 
		find two numbers such that they add up to a specific target number.
Return the indices of the two numbers (1-indexed) as an integer array answer of size 2, 
		where 1 <= answer[0] < answer[1] <= numbers.length.
The tests are generated such that there is exactly one solution. You may not use the same element twice


Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.

Input: numbers = [-1,0], target = -1
Output: [1,2]

Input: numbers = [2,3,4], target = 6
Output: [1,3]
										https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/				*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {              
    		/*Two pointers*/
        int left = 0;					//indice of my first item
        int right = numbers.size()-1; 	//indice of my last item 
        vector<int> indices;
        
        while(left <= right){
            if( numbers[left] + numbers[right] < target ){	//my sum is less than my target
                left++;		//it means that I need to choose a slightly bigger number
            }else if( numbers[left] + numbers[right] > target ){	//sum is greater than my target
                right--;	//it means that I need to choose a slightly smaller number 
            }else{
                indices.push_back(left + 1);
                indices.push_back(right + 1);	//+1 because the problem ask by indices that start from 1
                break;
            }
        }
        
        return indices;
    }
};