
// Two moves either right and down. You have to reach from the top left corner to the bottom right corner

const GridTravel = (m , n) => {
    if(m=== 1 && n === 1) return 1;
    if( m === 0 || n === 0) return 0;
    return GridTravel(m ,n-1) + GridTravel(m-1 , n);

};

console.log(GridTravel(1,1));
console.log(GridTravel(1,3));
console.log(GridTravel(3,3));
console.log(GridTravel(25,25)); // not running

// Complexity time = O(2^m+n)
            //   space  = O(m+n)