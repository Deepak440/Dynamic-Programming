// Given 
//   target sum , array if number 
//   check its possible to make target sum by using the number inside the arry;

#include <bits/stdc++.h>
using namespace std;

// Tabulation solution
void Solve(int target , int n, int arr[]){
	bool DP[n+1][target + 1];


	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= target; j++){
			if(i == 0 && j == 0){
				DP[i][j] = true;

			}else if(i == 0){
				DP[i][j] = false;
			}else if(j == 0){
				DP[i][j] = true;
			}else {
				DP[i][j] = DP[i-1][j] || DP[i-1][j-arr[i-1]];
			}
		}
	}


cout << DP[n][target];

}



int main(){


	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
   #endif
	int target_sum ;
	cin >> target_sum;
	int array_size;
	cin >> array_size;
	int arr[array_size];
	for(int i  =0 ; i <array_size ; i++){
		cin >> arr[i];
	}

	Solve(target_sum , array_size , arr);
     
	return 0;
}