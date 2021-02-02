/*Given a binary array, find the maximum number of consecutive 1s in this array.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0, aux=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                aux++;
            }else{
                if(aux > max) max = aux;
                aux = 0;
            }
        }
        if(aux > max) max = aux;        //we make this comparison in case there are no zeros in the array 
        return max;
    }
};