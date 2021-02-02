/*Given an integer n and an integer start.
Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.
Return the bitwise XOR of all elements of nums.*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            nums[i] = start + 2*i;
        }
        int ans = nums[0];
        for(int i=1; i<n; i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};