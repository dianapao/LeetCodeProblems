/*Given two strings s and t, check if s is a subsequence of t.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the 
characters without disturbing the relative positions of the remaining characters. 
(i.e., "ace" is a subsequence of "abcde" while "aec" is not).*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int positionS = 0;
        for(int i=0; i<t.size(); i++){
            if(t[i] == s[positionS]){
                positionS ++;
            }
        }
        if( positionS == s.size()) return true;
        else return false;
    }
};