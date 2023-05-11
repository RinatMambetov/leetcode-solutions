"use strict";

var xorOperation = function (n, start) {
	let result = start;

	for (let i = 1; i < n; i++) {
		result ^= start + 2 * i;
	}

	return result;
}

console.log(xorOperation(5, 0));//8
console.log(xorOperation(4, 3));//8
