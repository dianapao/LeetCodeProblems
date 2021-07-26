/*You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version 
of your product fails the quality check. Since each version is developed based on the previous version, 
all the versions after a bad version are also bad.
Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, 
which causes all the following ones to be bad.
You are given an API bool isBadVersion(version) which returns whether version is bad. 
Implement a function to find the first bad version. You should minimize the number of calls to the API.
		Input: n = 5, bad = 4
		Output: 4
		Explanation:
		call isBadVersion(3) -> false
		call isBadVersion(5) -> true
		call isBadVersion(4) -> true
		Then 4 is the first bad version.

1 2 3 4 5 6 7 8 9				//example with the function 
g g g b b b b b b  	l=1, r=6, m=1+(9-1)/2=1+4=5 
    l = 1, r=5, m=1+(5-1)/2=1+2=3
    l=3, r=5, m=3+(5-3)/2=3+1=4
    l=3, r=4, m=3+(4-3)/2=3+0.5=3
    l=4, r=4 */

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        
        while(left < right ){		//We are going to compute a lower bound
            int mid = left + (right - left)/2;
            if(isBadVersion(mid)){		//remember that isBadVersion is given already
                right = mid;	//if it is bad we have to go to the left side
            }else{
                left = mid+1;	
            } 
        }       
        return left;
    }
};