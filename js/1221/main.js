"use strict";

var balancedStringSplit = function (s) {
  let balance = 0;
  let result = 0;
  for (const i of s) {
    if (i === 'L') balance--;
    else balance++;
    if (balance === 0) result++;
  }
  return result;
};

// var balancedStringSplit = function (s) {
//   let balance = 0, result = 0;
//   for (const char of s) {
//     char === 'L' ? balance-- : balance++;
//     balance === 0 && result++;
//   }
//   return result;
// };


console.log(balancedStringSplit("RLRRLLRLRL"));//4
console.log(balancedStringSplit("RLRRRLLRLL"));//2
console.log(balancedStringSplit("LLLLRRRR"));//1
