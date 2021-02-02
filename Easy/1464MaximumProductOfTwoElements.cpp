/*Given the array of integers nums, you will choose two different indices i and j of that array. 
Return the maximum value of (nums[i]-1)*(nums[j]-1).
Example: Input: nums = [1,5,4,5]
		 Output: 16*/
#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& nums) {
        int indice1=0, indice2=1; 
        if(nums[indice1] > nums[indice2]){		
        	indice1 = 1;					//indice1 store position of the smallest number between nums[0] y num[1]
        	indice2 = 0;					//indice2 store position of the largest number		""  		""
        }
        for(int i=2; i<nums.size(); i++){		//start in the position 2
	        if(nums[i] >= nums[indice2]){  // IF the current number is greater than or equal to the largest number
	        	indice1 = indice2;				//indice1 is the second number most largest
	        	indice2 = i;
	        }else if(nums[i] > nums[indice1]){ //ELSE the 2nd number most largest find other more grater but the 1st No
	        	indice1 = i;
	        }
        }	
        int ans = (nums[indice1]-1) * (nums[indice2]-1);
        return ans; 
}

int main(){
	vector<int> nums = {10,2,5,2};
	int ans = maxProduct(nums);
	cout << "ans:" << ans << endl;
	return 0;
}