
const CanSum = (targetSum , numbers, memo = {}) => {
    if(targetSum in memo) return memo[targetSum];
    if(targetSum === 0) return true;
    if(targetSum < 0) return false;
    for( let num of numbers){
        const remainder = targetSum - num;
        if(CanSum(remainder , numbers, memo) === true){
            memo[targetSum] = true;
            return true;
        }
    }
    memo[targetSum] = false;
    return false;

};


console.log(CanSum(7,[4,3,5,7]));

console.log(CanSum(300,[14,7]));  // Run very well