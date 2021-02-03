/*Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.*/

#include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    string toLowerCase(string str) {
        string ans = "";
        for(int i=0; i<str.size(); i++){
            if( (int(str[i]) >= 65) && (int(str[i] <= 90) ) ){		//65=A and 90=Z in ascii code.
            	char aux = str[i] + 32;     //str[i] == value ascii. 32 position after is its lower case equivalent 
            	ans += aux;
            }else{
            	ans += str[i];
            }
        }
        return ans;
    }
};