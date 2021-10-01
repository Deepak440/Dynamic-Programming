
const best_Sum = (targertSum , numbers) => {
    const table = Array(targertSum +1).fill(null);
    table[0] = [];
    for(let i = 0; i <= targertSum; i++){
       if(table[i] !== null){
           for(let num of numbers){
               if(i+num <= targertSum){
                  const  combination = [...table[i] , num];
                  if(table[i+num] == null || table[i+num].length > combination.length){
                    table[i+num] = combination;
                  } 
                
               }
           }
       }
    }
    return table[targertSum];
  
  };
  
  console.log(best_Sum(7, [2,3]));
  console.log(best_Sum(7, [5,4,3,7]));
  console.log(best_Sum(8, [2,4]));
  console.log(best_Sum(300, [7,14]));
  console.log(best_Sum(100, [2,5 ,25]));