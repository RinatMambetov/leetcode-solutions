"use strict";

var map = function (arr, fn) {
  const res = [];

  arr.forEach((elem, index) => {
    res.push(fn(elem, index));
  });

  return res;
};

console.log(
  map([1, 2, 3], function plusone(n) {
    return n + 1;
  })
); //[2,3,4]
console.log(
  map([1, 2, 3], function plusI(n, i) {
    return n + i;
  })
); //[1,3,5]
console.log(
  map([10, 20, 30], function constant() {
    return 42;
  })
); //[42,42,42]
