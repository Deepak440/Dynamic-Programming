const CanSum = (targetSum , numbers) => {
    const table  = Array(targetSum + 1).fill(false);
    table[0] = true;
    for(let i = 0; i <= targetSum ; i++){
            if(table[i] === true){
                for(let num of numbers){
                 if(num + i <= targetSum)
                    table[i+num] = true;
                    
                }

            }
        }
        return table[targetSum];
    };



console.log(CanSum(7,[2,3]));

console.log(CanSum(300,[14,7]));  

//Time = O(m*n)
// Space = O(m)