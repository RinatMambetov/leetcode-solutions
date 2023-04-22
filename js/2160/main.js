"use strict";

var minimumSum = function (num) {
  let str = num.toString().split("").sort();
  return parseInt(str[0] + str[2]) + parseInt(str[1] + str[3]);
};

console.log(minimumSum(2932));
console.log(minimumSum(4009));
