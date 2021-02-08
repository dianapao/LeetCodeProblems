/*Given an array of integers arr, and three integers a, b and c. You need to find the number of good triplets.
		A triplet (arr[i], arr[j], arr[k]) is good if the following conditions are true:
0 <= i < j < k < arr.length
|arr[i] - arr[j]| <= a
|arr[j] - arr[k]| <= b
|arr[i] - arr[k]| <= c
	Where |x| denotes the absolute value of x.
	Return the number of good triplets
Example: Input: arr = [3,0,1,1,9,7], a = 7, b = 2, c = 3
			Output: 4
			Explanation:<< There are 4 good triplets: [(3,0,1), (3,0,1), (3,1,1), (0,1,1)].*/
#include<bits/stdc++.h>
using namespace std;

int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int tot=0;
        
        for(int i=0; i<=arr.size()-3; i++){
            for(int j=i+1; j<=arr.size()-2; j++){
                if(abs(arr[i]-arr[j]) <= a){
                    for(int k=j+1; k<=arr.size()-1; k++){
                        if( abs(arr[j]-arr[k]) <= b){
                            if( abs(arr[i]-arr[k]) <= c ){
                                tot++;
                            }
                        }
                    }
                }
            }
        }
        return tot;
}

int main(){
	vector<int> arr = {7,3,7,3,12,1,12,2,3};
	int a=5, b=8, c=1;
	int ans = countGoodTriplets(arr,a,b,c);
	cout << "ans: " << ans << endl;
	return 0;
}