"use strict";

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */

var filter = function (arr, fn) {
  let result = [];

  for (let i = 0; i < arr.length; i++) {
    if (fn(arr[i], i)) result.push(arr[i]);
  }

  return result;
};

// gptver
// const filter = (arr, fn) => arr.filter((el, i) => fn(el, i));

console.log(
  filter([0, 10, 20, 30], function greaterThan10(n) {
    return n > 10;
  })
); //[20,30]

console.log(
  filter([1, 2, 3], function firstIndex(n, i) {
    return i === 0;
  })
); //[1]
