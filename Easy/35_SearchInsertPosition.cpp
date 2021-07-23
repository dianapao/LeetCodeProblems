/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
Input: nums = [1,3,5,6], target = 5
Output: 2

Input: nums = [1,3,5,6], target = 2
Output: 1

Input: nums = [1,3], target = 2
Output: 1
https://leetcode.com/problems/search-insert-position/			*/
#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left=0, right=nums.size()-1, medium=0;
    while(left <= right){		//we do a binary search
        medium = left + (right-left)/2;
        if(target < nums[medium]){
            right = medium - 1;
        }else if(target > nums[medium]){
            left = medium + 1;
        }else{
            return medium;	//if is the value searched
        }
    }

    if(target > nums[medium]){
    	return medium+1;	//increiable 1 because the value in the position medium is less tan we want insert
    }else{
    	return medium;
    }
    
}

/*int main(){
	vector<int> nums = {1,3,5,6};
	int target = 2;
	int position = searchInsert(nums, target);
	cout << "position: " << position << endl;
	return 0;
}*/