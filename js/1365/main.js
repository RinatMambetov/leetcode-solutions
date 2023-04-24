"use strict";

var smallerNumbersThanCurrent = function (nums) {
  let res = [];
  for (const i of nums) {
    const c = nums.reduce((count, num) => {
      if (num < i) count++;
      return count;
    }, 0);
    res.push(c);
  }
  return res;
};

console.log(smallerNumbersThanCurrent([8, 1, 2, 2, 3])); //[4,0,1,1,3]
console.log(smallerNumbersThanCurrent([6, 5, 4, 8])); //[2,1,0,3]
console.log(smallerNumbersThanCurrent([7, 7, 7, 7])); //[0,0,0,0]
