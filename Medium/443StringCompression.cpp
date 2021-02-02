/*Given an array of characters chars, compress it using the following algorithm:
Begin with an empty string s. For each group of consecutive repeating characters in chars:
-> If the group's length is 1, append the character to s.
-> Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead be stored in the input character array chars. 
Note that group lengths that are 10 or longer will be split into multiple characters in chars.
After you are done modifying the input array, return the new length of the array.
Example: Input: chars = ["a","a","b","b","c","c","c"]
           Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
           Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".*/
#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
        //aacbbbb
        string s = "";
        short int buck=1, i;
        string castNumber;
        for(i=1; i<chars.size(); i++){
            if(chars[i]==chars[i-1]){       //if the current character is the same as the previous one
                buck++;
            }else{                          // if the caracter change 
            	if(buck == 1){                     //we only concatenate the character 
                    s += chars[i-1];
                }else{                      // ELSE have more than 1 character
                	s += chars[i-1];
                    castNumber = to_string(buck);       //we concatenate the character and its frequency
                    s += castNumber;
                }
                buck=1;         // we reset the frequency to 1
            }           
        }
           // we do the same as before only once from the second if
        if(buck == 1){  
            s += chars[i-1];
        }else{
        	s += chars[i-1];
            castNumber = to_string(buck);
            s += castNumber;
        }

        chars.erase(chars.begin(), chars.end());        //we delete all elements of the vector chars
        for(i=0; i<s.size(); i++){
        	chars.push_back(s[i]);
        }
        /*for(int j=0; j<chars.size(); j++){
        	cout << chars[j] << " - ";
        }cout << endl;
        cout << "s: " << s << endl;*/
        return (s.size());
    }

int main(){
	vector<char> nums = {'a','a','b','b','c','c','c'};
	//vector<char> nums = {'a'};
	int ans = compress(nums);
	cout << "ans: " << ans << endl;
	return 0;
}