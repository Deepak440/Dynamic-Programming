
const howSum = (targertSum , numbers) => {
    if(targertSum === 0) return [];
    if(targertSum < 0) return null;
    for(let num of numbers){
        const remainder = targertSum - num;
       const remainderResult  = howSum(remainder , numbers);
       if(remainderResult !== null){
           return [...remainderResult , num];       // O(m) if num are 1 each 
       }

    }
    return null;

};

console.log(howSum(7, [2,5]));
console.log(howSum(7, [5,4,7]));
console.log(howSum(7, [2,4]));
console.log(howSum(300, [7,14])); // Very Very slow
// n = length of the array
// m = target sum
// Time Complexity - O(n^m * m)