/*Given a non-negative integer num, return the number of steps to reduce it to zero. 
If the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.*/
#include <bits/stdc++.h>
using namespace std;
int numberOfSteps (int num) {
        int count = 0;
        while(num>0){
            if((num&1) == 0){ //par
                num = num >> 1;
            	cout << "/. " << num << endl;
            }else{
            	num -= 1;
            	cout << "-. " << num << endl;
        	}
            count++;
        }
        return count;
}

int main(){
	int ans = numberOfSteps(14);
	cout << "ans:" << ans << endl;
	return 0;
}