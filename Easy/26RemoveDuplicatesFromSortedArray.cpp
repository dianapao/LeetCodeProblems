/*Given a sorted array nums, remove the duplicates in-place such that each element appears only once 
	and returns the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) 
	extra memory.*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                nums.erase( nums.begin() + (i+1) );
                i--;
            }
        }
        return nums.size();
    }
};