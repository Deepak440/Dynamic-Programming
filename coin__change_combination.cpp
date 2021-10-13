// Given 
//   target amount, Coins array
//   find the number of the combination to pay the amount with the coins 

#include <bits/stdc++.h>
using namespace std;

// Tabulation solution
void Solve(int target , int n, int coin[]){
	vector <int> combination(target+1 , 0);

	combination[0] = 1;
	for(int i = 0; i <n ; i++){
		for(int j= 1; j < combination.size(); j++){
			if(j >= coin[i]){
				combination[j] += combination[j-coin[i]];

			}
		}
	}

cout << combination[target];

}



int main(){


	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
   #endif
	int amount ;
	cin >> amount;
	int array_size;
	cin >> array_size;
	int coin[array_size];
	for(int i  =0 ; i <array_size ; i++){
		cin >> coin[i];
	}

	Solve(amount , array_size , coin);
     
	return 0;
}