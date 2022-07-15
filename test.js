
const memo = {};

function memoize(fn) {
    return function(...args) {
        if (!memo[args]) {
        memo[args] = fn(...args);
        }
        return memo[args];
    };
}

const getDoubleOfNumber = function(number) {console.log('inside function'); return 2*number;}
const memoizedGetDoubleOfNumber = memoize(getDoubleOfNumber);
console.log(memoizedGetDoubleOfNumber(3),"a" )    //=> this function should print the console statememnt and return result as 6
console.log(memoizedGetDoubleOfNumber(3),"b" )    //=> this time, only the result should be returned as 6