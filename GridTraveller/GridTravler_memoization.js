
// Two moves either right and down. You have to reach from the top left corner to the bottom right corner

const GridTravel = (m , n, memo = {}) => {
    // Are the arguments in the memo object
    const key = m + ',' + n;                                          // Memo object store key as a string where Grid(a, b) == Grid(b,a)
    if(key in memo ) return memo[key];
    if(m=== 1 && n === 1) return 1;
    if( m === 0 || n === 0) return 0;
    memo[key] =  GridTravel(m ,n-1 , memo) + GridTravel(m-1 , n , memo);        // Memo object is passed as a Reference so used by all recurrsion calls
    return memo[key];

};

console.log(GridTravel(1,1));
console.log(GridTravel(1,3));
console.log(GridTravel(3,3));
console.log(GridTravel(25,25)); // Running

// Time Compelxity = 
// Space Complexity = 