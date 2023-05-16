"use strict";

/**
 * @param {string} s
 * @return {string}
 */

var sortSentence = function (s) {
  let m = new Map();
  let arr = s.split(" ");
  arr.forEach((element) => {
    m.set(element[element.length - 1], element.slice(0, element.length - 1));
  });
  m = new Map([...m.entries()].sort());
  let result = "";
  for (const i of m.keys()) {
    result += m.get(i) + " ";
  }
  return result.trimEnd();
};

console.log(sortSentence("is2 sentence4 This1 a3")); //"This is a sentence"
console.log(sortSentence("Myself2 Me1 I4 and3")); //"Me Myself and I"
