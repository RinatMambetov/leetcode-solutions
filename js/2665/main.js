"use strict";

// var createCounter = function (init) {
//   const counter = {};

//   counter.c = init;
//   counter.t = init;
//   counter.increment = function () {
//     return ++this.c;
//   };
//   counter.reset = function () {
//     this.c = this.t;
//     return this.c;
//   };
//   counter.decrement = function () {
//     return --this.c;
//   };

//   return counter;
// };

var createCounter = function (init) {
  const counter = {
    c: init,
    t: init,
    increment() {
      return ++this.c;
    },
    reset() {
      this.c = this.t;
      return this.c;
    },
    decrement() {
      return --this.c;
    }
  };

  return counter;
};

const counter = createCounter(5);
console.log(counter.increment()); // 6
console.log(counter.reset()); // 5
console.log(counter.decrement()); // 4

const counter2 = createCounter(0);
console.log(counter2.increment()); // 1
console.log(counter2.increment()); // 2
console.log(counter2.decrement()); // 1
console.log(counter2.reset()); // 0
console.log(counter2.reset()); // 0
