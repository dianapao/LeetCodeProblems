/*Given an array nums of integers, return how many of them contain an even number of digits.
Example: Input: nums = [555,901,482,1771]
			Output: 1 
			Explanation: 
			Only 1771 contains an even number of digits.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        short int sizeNumCurrent=0, tot=0;

        for(short int i=0; i<nums.size(); i++){
            string numStr = to_string(nums[i]);		//cast to string each element in nums
            sizeNumCurrent = numStr.size();			//obtain the size of each element in nums
            if((sizeNumCurrent & 1) == 0) tot++;	//if the size is even, tot increase
        }

        return tot;
    }
};