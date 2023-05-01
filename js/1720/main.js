"use strict";

// var decode = function (encoded, first) {
//   const result = [first];
//   let temp = first;

//   for (let i = 0; i < encoded.length; i++) {
//     let elem = temp ^ encoded[i];
//     result.push(elem);
//     temp = elem;
//   }

//   return result;
// };

// var decode = function (encoded, first) {
//   const result = [first];
//   let temp = first;

//   for (const i of encoded) {
//     temp ^= i;
//     result.push(temp);
//   }

//   return result;
// };

var decode = function (encoded, first) {
  const temp = first;

  const result = encoded.map(curval => first ^= curval);
  result.unshift(temp);

  return result;
};

console.log(decode([1, 2, 3], 1));//[1,0,2,1]
console.log(decode([6, 2, 7, 3], 4));//[4,2,0,7,4]
