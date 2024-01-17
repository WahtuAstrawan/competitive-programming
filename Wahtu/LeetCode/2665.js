/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let base = init
    return {
        increment : () =>{
            return ++base
        },

        reset : () =>{
            return base = init
        },

        decrement : ()=>{
            return --base
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
