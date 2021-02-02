/*Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string max = num1, min = num2, ans="";
        int lenMax = num1.size()-1, lenMin=num2.size()-1;
        if(num2.size() > num1.size()){
        	max = num2;
        	min = num1;
        	lenMin = num1.size()-1;
        	lenMax = num2.size()-1;
        }

        short int carry = 0;
        while(lenMin >= 0){
        	int aux = (min[lenMin]-'0') + (max[lenMax]-'0') + carry;
        	string auxString = to_string(aux);
        	if(aux > 9){
        		carry = auxString[0] - '0';
        		ans += auxString[1];
        	}else{
        		carry = 0;
        		ans += auxString;
        	}
        	lenMax--;
        	lenMin--;
        }

    	for(int i=lenMax; i>=0; i--){
			int aux = (max[lenMax]-'0') + carry;
			string auxString = to_string(aux);
			if(aux > 9){
        		carry = auxString[0] - '0';
        		ans += auxString[1];
        	}else{
        		carry = 0;
        		ans += auxString;
        	}
        	lenMax--;
    	}
    	if(carry){
    		ans += to_string(carry);
    	}

    	reverse(ans.begin(), ans.end());
    	return ans;
    }
};