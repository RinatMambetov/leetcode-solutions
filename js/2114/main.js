"use strict";

var mostWordsFound = function (sentences) {
  let max = 0;
  for (const i of sentences) {
    let len = i.split(" ").length;
    max = max > len ? max : len;
  }
  return max;
};

console.log(
  mostWordsFound([
    "alice and bob love leetcode",
    "i think so too",
    "this is great thanks very much",
  ])
); // 6

console.log(
  mostWordsFound(["please wait", "continue to fight", "continue to win"])
); // 3
