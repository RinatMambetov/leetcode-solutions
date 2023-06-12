"use strict";

/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */

var sortBy = function (arr, fn) {
  function f(a, b) {
    if (fn(a) < fn(b)) return -1;
    if (fn(a) > fn(b)) return 1;
    return 0;
  }
  return arr.sort(f);
  // return (arr) => arr.sort((a, b) => fn(a) - fn(b));
};

console.log(sortBy([5, 4, 1, 2, 3], (fn = (x) => x))); //[1, 2, 3, 4, 5]
console.log(sortBy([{ x: 1 }, { x: 0 }, { x: -1 }], (fn = (d) => d.x))); //[{"x": -1}, {"x": 0}, {"x": 1}]
console.log(
  sortBy(
    [
      [3, 4],
      [5, 2],
      [10, 1],
    ],
    (fn = (x) => x[1])
  )
); //[[10, 1], [5, 2], [3, 4]]
