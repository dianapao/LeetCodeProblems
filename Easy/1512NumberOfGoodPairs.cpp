/*Given an array of integers nums.
A pair (i,j) is called good if nums[i] == nums[j] and i < j.
Return the number of good pairs.*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        short int tot=0;
        for(short int i=0; i<nums.size()-1; i++){
            for(short int j=i+1; j<nums.size(); j++){
                    if(nums[i] == nums[j])
                        tot++;
            }
        }
         return tot;
    }
};

int main(){
        Solution s1;
        vector<int> nums = {1,2,3,1,1,3};
        s1.numIdenticalPairs(nums);
        cout << s1.numIdenticalPairs(nums) << endl;
        return 0;
}

