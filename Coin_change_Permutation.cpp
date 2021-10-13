// Given 
//   target amount, Coins array
//   find the number of the Permutation to pay the amount with the coins 

#include <bits/stdc++.h>
using namespace std;

// Tabulation solution
void Solve(int target , int n, int coin[]){
	vector <int> Permutation(target+1 , 0);
	Permutation[0] = 1;

	for(int i = 1; i <= target; i++){
		for(int j = 0; j <n; j++){
			if(i >= coin[j]){
				Permutation[i] += Permutation[i-coin[j]];
			}
		}
	}


cout << Permutation[target];

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