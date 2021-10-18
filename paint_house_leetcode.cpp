//There are a row of n houses, each house can be painted with one of the three colors: red, blue or green. The cost of painting each house with a certain color is different. You have to paint all the houses such that no two adjacent houses have the same color. The cost of painting each house with a certain color is represented by a n x 3 cost matrix. For example, costs[0][0] is the cost of painting house 0 with color red; costs[1][2] is the cost of painting house 1 with color green, and so on


#include <bits/stdc++.h>
using namespace std;

int main(){


	#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
   #endif
    
    int house;
    int color = 3;
    cin >> house ;

    int cost[3][house];
    for(int i = 0;  i < color; i ++){
    	for(int j = 0; j < house ;j++){
   		cin >> cost[i][j];
    	}
    }

    int min_cost = INT_MAX;
    int dp[color][house];

    // Intilise the first column => cost of coloring first house  

    dp[0][0] = cost[0][0];
    dp[1][0] = cost[1][0];
    dp[2][0] = cost[2][0];

    for(int i = 1; i < house ;i++){
    	dp[0][i] = cost[0][i] + min(dp[1][i-1], dp[2][i-1]);
    	dp[1][i] = cost[1][i] + min(dp[0][i-1], dp[2][i-1]);
    	dp[2][i] = cost[2][i] + min(dp[1][i-1], dp[0][i-1]);
    	
      }

    
    for(int i = 0 ; i < color ;i++){
    	if(min_cost > dp[i][house-1]){
    		min_cost = dp[i][house-1];
    	}
    } 
    

   cout << min_cost << endl;

	return 0;

}