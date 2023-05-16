"use strict";

/**
 * @param {string} sentence
 * @return {boolean}
 */

// var checkIfPangram = function (sentence) {
//   const alphabet = "abcdefghijklmnopqrstuvwxyz";
//   for (const letter of alphabet) {
//     if (sentence.includes(letter) === false) return false;
//   }
//   return true;
// };

//gptver
var checkIfPangram = function (sentence) {
  const alphabet = "abcdefghijklmnopqrstuvwxyz";
  return [...alphabet].every((letter) => sentence.includes(letter));
};

console.log(checkIfPangram("thequickbrownfoxjumpsoverthelazydog")); //true
console.log(checkIfPangram("leetcode")); //false
