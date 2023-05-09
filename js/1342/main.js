"use strict";

// var numberOfSteps = function (num) {
//   let steps = 0;
//   function fn(num) {
//     if (num === 0) return steps;
//     steps++;
//     if (num % 2 === 1) {
//       num -= 1;
//       fn(num);
//     }
//     else if (num % 2 === 0) {
//       num /= 2;
//       fn(num);
//     }
//     return steps;
//   }
//   return fn(num);
// };

// gpt
var numberOfSteps = function (num) {
  let steps = 0;

  while (num > 0) {
    steps++;

    if (num % 2 === 0) {
      num /= 2;
    } else {
      num -= 1;
    }
  }

  return steps;
};


console.log(numberOfSteps(14));//6
console.log(numberOfSteps(8));//4
console.log(numberOfSteps(123));//12
