"use strict";

/**
 * @param {Object | Array} obj
 * @return {boolean}
 */
var isEmpty = function (obj) {
  return Object.keys(obj).length === 0 ? true : false;
};

console.log(isEmpty({ x: 5, y: 42 })); //false
console.log(isEmpty({})); //true
console.log(isEmpty([null, false, 0])); //false
