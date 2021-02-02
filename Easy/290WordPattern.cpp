/*Given a pattern and a string s, find if s follows the same pattern.
Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.*/
#include <bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern, string s) {
        string ans ="";
        short int aux=0;
        vector<string> words;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                words.push_back(ans);
                ans = "";
            }else
            	ans += s[i];
        }
        words.push_back(ans);
        if(words.size() != pattern.size())
            return false;
        
        bool flag = true;
        map<char, string> mapPattern;
        vector<string> sMapped;
        for(int i=0; i<pattern.size(); i++){
            auto findKey = mapPattern.find(pattern[i]);
            if(findKey == mapPattern.end()){
            	if(find(sMapped.begin(), sMapped.end(), words[i]) == sMapped.end()){
            		mapPattern.insert({pattern[i], words[i]});
            		sMapped.push_back(words[i]);
            	}else{
            		flag = false;
            		break;
            	}
                
            }else{
                if(findKey->second != words[i]){
                    flag = false;
                    break;
                }
            }
        }

        if(flag) return true;
        else return false;
    }

int main(){
	string pattern="abba";
	string s = "dog dog dog dog";
	
	bool ans = wordPattern(pattern, s);
	cout << "output: "<< ans << endl;
	return 0;
}