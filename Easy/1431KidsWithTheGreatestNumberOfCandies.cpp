/*Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that 
the ith kid has.
For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the 
greatest number of candies among them. Notice that multiple kids can have the greatest number of candies.*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        short int max = 0;
        vector<bool> ans;
        for(short int i=0; i<candies.size(); i++){
            if(candies[i] > max) max = candies[i];
        }
        for(short int i=0; i<candies.size(); i++){
            if((candies[i]+extraCandies) >= max) 
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};