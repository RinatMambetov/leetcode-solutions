"use strict";

// var once = function (fn) {
//   let calls = 0;
//   return function (...args) {
//     if (calls === 0) {
//       calls = 1;
//       let res = fn(args[0], args[1], args[2]);
//       return res;
//     }
//     else
//       return undefined;
//   }
// };

var once = function (fn) {
  let calls = false;
  return function (...args) {
    if (calls === false) {
      calls = true;
      return fn(...args);
    }
    else
      return undefined;
  }
};

// gpt ver
// const once = (fn) => {
//   let called = false;

//   return (...args) => {
//     if (!called) {
//       called = true;
//       return fn(...args);
//     }
//     return undefined;
//   }
// };


let fn = (a, b, c) => (a + b + c)
let onceFn = once(fn)
console.log(onceFn(1, 2, 3));  // 6
console.log(onceFn(2, 3, 6));  // returns undefined without calling f

let fn2 = (a, b, c) => (a * b * c)
let onceFn2 = once(fn2)
console.log(onceFn2(5, 7, 4));  // 140
console.log(onceFn2(2, 3, 6));  // returns undefined without calling f
console.log(onceFn2(4, 6, 8));  // returns undefined without calling f
