const fib  = (n) => {
    if(n <= 2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
} ;

console.log(fib(4));
console.log(fib(6));
console.log(fib(10));
console.log(fib(18));
console.log(fib(89));  // not working 