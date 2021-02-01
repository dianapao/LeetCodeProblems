/*A 3 x 3 magic square is a 3 x 3 grid filled with distinct numbers from 1 to 9 such that each row, column, 
and both diagonals all have the same sum.
Given a row x col grid of integers, how many 3 x 3 "magic square" subgrids are there?  (Each subgrid is contiguous).*/
#include<bits/stdc++.h>
using namespace std;
int numMagicSquaresInside(vector<vector<int>>& grid) {
	int tot = 0;
	if(grid.size() >= 3){
		for(int i=0; i<=grid.size()-3; i++){
			if(grid[i].size() >= 3){
				for(int j=0; j<=grid[i].size()-3; j++){
					vector<bool> check(9, false);
					bool equals = false;
	             	for(int k=i; k<i+3; k++){
	                    for(int z=j; z<j+3; z++){
	                        if(check[grid[k][z]] == true){
	                        	equals = true;
	                        	break;
	                        }else check[grid[k][z]] = true;
	                    }
	                    if (equals) break;
	                }
	                if(equals) continue;

					short int longitud = grid[i][j] + grid[i][j+1] + grid[i][j+2];
					short int aux = grid[i+1][j] + grid[i+1][j+1] + grid[i+1][j+2];
					if(aux != longitud) continue;
					aux = grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2];
					if(aux != longitud) continue;
					aux = grid[i][j+1] + grid[i+1][j+1] + grid[i+2][j+1];
					if(aux != longitud) continue;
					aux = grid[i][j+2] + grid[i+1][j+2] + grid[i+2][j+2];
					if(aux != longitud ) continue;
					aux = grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j];
					if(aux != longitud ) continue;
					aux = grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
					if(aux == longitud) tot++;
				}
			}
		}
	}   
	cout << "tot:" << tot << endl;
	return tot;   
}
int main(){
	vector<vector<int>> grid = {{4,3,8,4},{9,5,1,9},{2,7,6,2}};
	//grid = {{0}};
	//grid = {{4,7,8}, {9,5,1}, {2,3,6}};
	//id = {{5,5,5},{5,5,5},{5,5,5}};
	int tot = numMagicSquaresInside(grid);
	return 0;
}