/*Given an integer number n, return the difference between the product of its digits and the sum of its digits.*/

#include<bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n) {
        string num = to_string(n);
        cout << "num: " << num << endl;
        
        int sum=0;
        long int prod=1;
        for(int i=0; i<num.size(); i++){
            prod = prod * (num[i]-'0');     //cast num[i] (char) in an integer
            sum = sum + (num[i]-'0');
        }

        long int ans = prod - sum;
        return ans;
}

int main(){
	int n = 114;
	int ans = subtractProductAndSum(n);
	cout << "R:" << ans << endl;
	return 0;
}