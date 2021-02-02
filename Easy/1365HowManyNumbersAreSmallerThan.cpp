/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, 
for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
Return the answer in an array.
Example: Input: nums = [8,1,2,2,3]
         Output: [4,0,1,1,3]*/
#include<bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> bucket;
        for(int i=0; i<nums.size(); i++){
            auto search = bucket.find(nums[i]);
            if(search == bucket.end()){
                bucket.insert({nums[i], 1});
            }else{
                search->second++;
            }
        }
        
        map<int,int> numberStorage;
        int count = 0;
        for(auto it=bucket.begin(); it!=bucket.end(); it++){
            numberStorage.insert({it->first, count});
            count += it->second;
        }
        
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            auto it = numberStorage.find(nums[i]);
            ans.push_back(it->second);
        }
        return ans;
}
