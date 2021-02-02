/*Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order
    of the non-zero elements
Example: Input: [0,1,0,3,12]
         Output: [1,3,12,0,0]*/

#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int ceros = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                i--;
                nums.erase(nums.begin()+(i+1));
                ceros++;
            }
        }
        for(int i=0; i<ceros; i++){
            nums.push_back(0);
        }
}

int main(){
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " - ";
    }cout << endl;
    return 0;
}