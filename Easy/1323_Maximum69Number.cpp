/*Given a positive integer num consisting only of digits 6 and 9.
Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).
Example: Input: num = 9669
		 Output: 9969*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string numStr = to_string(num);
        for(short int i=0; i<numStr.size(); i++){
            if(numStr[i] == '6'){		//only change the 1st 6 if it exists 
                numStr[i] = '9';
                break;
            }
        }
        return stoi(numStr);
    }
};