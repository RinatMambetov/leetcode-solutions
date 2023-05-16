"use strict";

/**
 * @param {string[]} word1
 * @param {string[]} word2
 * @return {boolean}
 */
// var arrayStringsAreEqual = function (word1, word2) {
//   word1 = word1.reduce((acc, curval) => (acc += curval));
//   word2 = word2.reduce((acc, curval) => (acc += curval));
//   return word1 === word2;
// };

//gptver
const arrayStringsAreEqual = (word1, word2) =>
  word1.join("") === word2.join("");

console.log(arrayStringsAreEqual(["ab", "c"], ["a", "bc"])); //true
console.log(arrayStringsAreEqual(["a", "cb"], ["ab", "c"])); //false
