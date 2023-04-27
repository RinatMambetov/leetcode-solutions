"use strict";

var fibGenerator = function* () {
  let count = 0;
  let a = 0;
  let b = 1;
  while (true) {
    if (count === 0) {
      yield a;
      count++;
    } else if (count === 1) {
      yield b;
      count++;
    } else {
      yield a + b;
      const sum = a + b;
      a = b;
      b = sum;
    }
  }
};

// var fibGenerator = function* () {
//   let a = 0;
//   let b = 1;

//   while (true) {
//     yield a;
//     [a, b] = [b, a + b];
//   }
// };

const gen = fibGenerator();
console.log(gen.next().value); //0
console.log(gen.next().value); //1
console.log(gen.next().value); //1
console.log(gen.next().value); //2
console.log(gen.next().value); //3
console.log(gen.next().value); //5
console.log(gen.next().value); //8
console.log(gen.next().value); //13

// the digital root of a given number

const q = function (num) {
  return 1 + ((num - 1) % 9);
};

const qq = function (num) {
  if (num == 0) {
    return 0;
  } else if (num % 9 == 0) {
    return 9;
  } else {
    return num % 9;
  }
};

console.log(q(9985)); //4
console.log(qq(9985)); //4
