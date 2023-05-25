"use strict";

/**
 * @param {number[]} nums
 */
// var ArrayWrapper = function(nums) {

// };

// ArrayWrapper.prototype.valueOf = function() {

// }

// ArrayWrapper.prototype.toString = function() {

// }

/**
 * const obj1 = new ArrayWrapper([1,2]);
 * const obj2 = new ArrayWrapper([3,4]);
 * obj1 + obj2; // 10
 * String(obj1); // "[1,2]"
 * String(obj2); // "[3,4]"
 */

class ArrayWrapper {
  constructor(nums) {
    this.nums = nums;
  }

  valueOf() {
    return this.nums.reduce((acc, curval) => acc + curval, 0);
  }

  toString() {
    return "[" + this.nums.toString() + "]";
  }
}

const obj1 = new ArrayWrapper([1, 2]);
const obj2 = new ArrayWrapper([3, 4]);
console.log(obj1 + obj2); //10
console.log(String(obj1));
console.log(String(obj2));
