// // Calulate the maximum gold can collect from the Goldmine

#include <bits/stdc++.h>
using namespace std;

int main(){


	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
   #endif
	// n are rows and m are columns
	int n, m;
	cin >> n >> m;
	int arr[n][m];

	// Input array matrix 
	for(int i = 0; i <n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}
// We will start finding Gold from 2nd column and if we have only one column the result will be maximum of 1st column
 for(int j = 1; j <m; j++){
		for(int i = 0;i < n; i++){

		// For the row 0
		  if( i == 0){
		  	arr[i][j] += max(arr[i][j-1] , arr[i+1][j-1]);

		  }
		  else if(i == n-1){
		  		arr[i][j] += max(arr[i][j-1] , arr[i-1][j-1]);

		  }else{
		  	arr[i][j] += max(arr[i][j-1] , max(arr[i-1][j-1] ,arr[i+1][j-1]));

		  }
		}
	}
	int max_gold = 0;
    for(int i = 0; i < n; i++){
    	if(max_gold < arr[i][m-1]){
    		max_gold = arr[i][m-1];
    	}
    }
    cout << max_gold ;

	return 0;

}