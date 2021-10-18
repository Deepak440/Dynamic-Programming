// // Calulate the maximum sum of non adjacent of array
 // => take any sequence with maxium sum provided no to adjacent array elemnt in sequence

#include <bits/stdc++.h>
using namespace std;

int main(){


	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
   #endif

    int n;
    cin >> n;

    int arr[n];

    for( int i = 0 ; i < n; i++){
    	cin >> arr[i];
    }
     // for first elemnt two option inlcude or exclude
     int include_sum = arr[0];
     int exclude_sum = 0;
    
    for(int i = 1; i <n; i++){
    	// As if previous elemnt is not taken so we can include the current element in the sum

    	int new_include_sum = exclude_sum + arr[i];
    	int new_exclude_sum = max(include_sum, exclude_sum);
    	include_sum = new_include_sum;
    	exclude_sum = new_exclude_sum; 
    }

    cout << max(include_sum ,exclude_sum) << "\n";

	return 0;

}