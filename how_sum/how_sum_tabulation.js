
const howSum = (targertSum , numbers) => {
  const table = Array(targertSum +1).fill(null);
  table[0] = [];
  for(let i = 0; i <= targertSum; i++){
     if(table[i] !== null){
         for(let num of numbers){
             if(i+num <= targertSum){
             table[i+num] = [...table[i] , num];
             }
         }
     }
  }
  return table[targertSum];

};

console.log(howSum(7, [2,3]));
console.log(howSum(7, [5,4,3,7]));
console.log(howSum(8, [2,4]));
console.log(howSum(300, [7,14]));