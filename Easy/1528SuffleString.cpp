/*Given a string s and an integer array indices of the same length.
The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.
Return the shuffled string
Example: Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
         Output: "leetcode".*/

#include<bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& indices) {
        string ans = "";
        for(int i=0; i<s.size(); i++){
            auto iterator = find(indices.begin(), indices.end(), i);
            int position = iterator - indices.begin();
            ans += s[position];
        }
        return ans;
}

int main(){
	string s;
	vector<int> indices;
	s = "codeleet", indices = {4,5,6,7,0,2,1,3};
	string ans = restoreString(s, indices);
	cout << "ans: " << ans << endl;
	return 0;
}