/*You're given strings jewels representing the types of stones that are jewels, and stones representing the stones 
you have. Each character in stones is a type of stone you have. You want to know how many of the stones 
you have are also jewels.
Letters are case sensitive, so "a" is considered a different type of stone from "A".*/
#include<bits/stdc++.h>
using namespace std; 

int numJewelsInStones(string jewels, string stones) {
	map<char, int> bucketStones;

    for(int i=0; i<stones.size(); i++){
        auto findStone = bucketStones.find(stones[i]);
        if(findStone == bucketStones.end()){
        	bucketStones.insert({stones[i], 1});
        }else{
        	findStone->second += 1;
        }
    }

    short int tot=0;
    for(auto typeStone=bucketStones.begin(); typeStone!=bucketStones.end(); typeStone++){
    	auto findJewel = jewels.find(typeStone->first);
    	if(findJewel != string::npos){		//if exist this substring in the string jewels 
    		tot += typeStone->second;
    	}
    }

    return tot;
}

int main(){
	string jewels = "z", stones = "ZZ";
	int tot = numJewelsInStones(jewels, stones);
	cout << "tot: " << tot << endl;
	return 0;
}