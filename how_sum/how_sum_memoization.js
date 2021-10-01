// Use a memo object which store array of numbers
const howSum = (targertSum , numbers, memo = {}) => {
    if(targertSum in memo) return memo[targertSum];
    if(targertSum === 0) return [];
    if(targertSum < 0) return null;
    for(let num of numbers){
        const remainder = targertSum - num;
       const remainderResult  = howSum(remainder , numbers, memo);
       if(remainderResult !== null){
           memo[targertSum] = [...remainderResult , num]; 
           return memo[targertSum];
       }

    }
    memo[targertSum] = null;
    return memo[targertSum];

};

console.log(howSum(7, [2,5]));
console.log(howSum(7, [5,4,7]));
console.log(howSum(7, [2,4]));
console.log(howSum(300, [7,14])); 

// Complexity - 