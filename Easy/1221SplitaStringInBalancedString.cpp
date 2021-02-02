/*Balanced strings are those who have equal quantity of 'L' and 'R' characters.
Given a balanced string s split it in the maximum amount of balanced strings.
Return the maximum amount of splitted balanced strings.

Input: s = "RLRRLLRLRL"
Output: 4
Explanation: s can be split into "RL", "RRLL", "RL", "RL"
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        short int R=0, L=0, tot=0;
        bool completed = false;
        for(int i=0; i<s.size(); i++){
            if( s[i] == 'R') R++;
            else L++;
            if( R == L){        //in the first moment R == L we have the minumun split
                tot ++;
                L = 0;
                R = 0;
            }
        }
        return tot;
    }
};