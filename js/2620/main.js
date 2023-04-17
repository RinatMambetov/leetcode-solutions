"use strict";

var createCounter = function (n) {
  let counter = n;
  return function () {
    return counter++;
  };
};

const counter = createCounter(10);
console.log(counter());
console.log(counter());
console.log(counter());

const counter2 = createCounter(-2);
console.log(counter2());
console.log(counter2());
console.log(counter2());
console.log(counter2());
console.log(counter2());
