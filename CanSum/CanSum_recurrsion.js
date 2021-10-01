const CanSum = (targetSum , numbers) => {
    if(targetSum === 0) return true;
    if(targetSum < 0) return false;
    for( let num of numbers){
        const remainder = targetSum - num;
        if(CanSum(remainder , numbers) === true){
            return true;
        }
    }
    return false;

};


console.log(CanSum(7,[4,3,5,7]));

console.log(CanSum(300,[14,7]));  /// Very slow . Not running