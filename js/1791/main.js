"use strict";

/**
 * @param {number[][]} edges
 * @return {number}
 */

// var findCenter = function (edges) {
//   const first = edges[0][0];
//   const second = edges[0][1];
//   if (edges[0].includes(first) && edges[1].includes(first)) return first;
//   return second;
// };

//gptver
function findCenter(edges) {
  const [first, second] = edges[0];
  return edges[0].includes(first) && edges[1].includes(first) ? first : second;
}

console.log(
  findCenter([
    [1, 2],
    [2, 3],
    [4, 2],
  ])
); //2

console.log(
  findCenter([
    [1, 2],
    [5, 1],
    [1, 3],
    [1, 4],
  ])
); //1
