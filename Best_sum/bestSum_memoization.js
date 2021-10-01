
const bestSum = (targertSum , numbers , memo = {}) => {
    if(targertSum in memo) return memo[targertSum];
    if(targertSum === 0) return [];
    if(targertSum < 0) return null;

    let shortestCombination = null;
    for(let num of numbers){
        const remainder = targertSum - num;
        const remainderCombination = bestSum(remainder , numbers , memo);
        if(remainderCombination !== null){
         const combination =    [...remainderCombination , num];
         if(shortestCombination === null|| combination.length < shortestCombination.length){
             shortestCombination = combination;
         }
        }
    }
    memo[targertSum] = shortestCombination;
    return memo[targertSum];

};


console.log(bestSum(7, [5,3,4,7]));
console.log(bestSum(8, [5,3,5]));
console.log(bestSum(8, [1,4,5]));
console.log(bestSum(100, [1,2,5,25]));