"use strict";

/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
// var chunk = function (arr, size) {
//   if (arr.length === 0) return [];
//   if (arr.length <= size) return [arr];
//   let result = [];
//   let tempSize = size;
//   let tempArr = [];
//   for (let i = 0; i < arr.length; i++) {
//     tempArr.push(arr[i]);
//     tempSize--;
//     if (tempSize === 0) {
//       result.push(tempArr);
//       tempArr = [];
//       tempSize = size;
//     }
//   }
//   if (tempArr.length > 0) result.push(tempArr);
//   return result;
// };

// gptver
const chunk = (arr, size) => {
  const result = [];
  let tempArr = [];
  for (const item of arr) {
    tempArr.push(item);
    if (tempArr.length === size) {
      result.push(tempArr);
      tempArr = [];
    }
  }
  if (tempArr.length > 0) result.push(tempArr);
  return result;
};

console.log(chunk([1, 2, 3, 4, 5], 1)); //[[1],[2],[3],[4],[5]]
console.log(chunk([1, 9, 6, 3, 2], 3)); //[[1,9,6],[3,2]]
console.log(chunk([8, 5, 3, 2, 6], 6)); //[[8,5,3,2,6]]
console.log(chunk([], 1)); //[]
