/*Given a string s, the power of the string is the maximum length of a non-empty substring 
	that contains only one unique character.
Return the power of the string.
Example: Input: s = "leetcode"
			Output: 2
			Explanation: The substring "ee" is of length 2 with the character 'e' only.*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        short int max=1, aux=1;
        for(short int i=1; i<s.size(); i++){
            if( s[i] == s[i-1]){
                aux++;
            }else{
                if(aux > max) max = aux;
                aux=1;
            }
        }
        if(aux > max) max = aux;
        return max;
    }
};