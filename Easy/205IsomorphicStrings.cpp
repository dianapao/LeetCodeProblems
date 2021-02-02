/*Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. 
No two characters may map to the same character, but a character may map to itself.*/
#include<bits/stdc++.h>
using namespace std;
/*
	bar, foo
	paperi titlee
	p,t
	a,i
	e,l
	r,e
	i,e
*/
bool isIsomorphic(string s, string t) {
        map<char,char> mapOfS;
        vector<char> mappedT;
        bool flag = true;
        for(int i=0; i<s.size(); i++){
        	auto findS = mapOfS.find(s[i]);
        	if(findS == mapOfS.end()){
        		auto findMapped = find(mappedT.begin(), mappedT.end(), t[i]);
        		if(findMapped == mappedT.end()){
        			mapOfS.insert({s[i], t[i]});
        			mappedT.push_back(t[i]);
        		}else{
        			flag = false;
        			break;
        		}
        	}else{
        		if(findS->second != t[i]){
        			flag = false;
        			break;
        		}
        	}
        }
        if(flag) return true;
        else return false;
    }
int main(){
	string s1 = "egg";
	string s2 = "add";
	cout << isIsomorphic(s1,s2) << endl;

	return 0;
}