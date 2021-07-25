/*Given a non-negative integer x, compute and return the square root of x.
Since the return type is an integer, the decimal digits are truncated, and only the integer part 
	of the result is returned.
Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.
Input: x = 4
Output: 2

Input: x = 8
Output: 2
https://leetcode.com/problems/sqrtx/  			*/

class Solution {
public:
    int mySqrt(int x) {
        long long int left=0;
        long long int right = x;
        
        while(left <= right){
            long long int mid = left + (right-left)/2;
            if(mid * mid < x){
                left = mid +1;
            }else if(mid*mid > x){
                right = mid -1;
            }else{
                return mid;
            }
        }
        
        return right;
    }           
};

/*

            8
            0 1 2 3 4 5 6 7 8 			->0+(8-0)/2=4 -> m=4   
            l       m       r           		4*4>x 	->	 r=4-1=3
            l m   r   					->0+(3-0)/2=1.5 -> m=1   &   1*1 < x	->	 l=1+1=2
                l r     				-> 2+(3-2)/2=2+0.5=2.5  -> m=2
                m       						2*2<x	->	l=2+1=3
                						-> 3+(3-3)/2=3	-> m=3		&	3*3>x	->		r=3-1=2
                							Finalmente l=3, r=2
*/