"use strict";

var countDigits = function (num) {
	let tempNum = num;
	let count = 0;

	while (tempNum !== 0) {
		let digit = tempNum % 10;
		if (num % digit === 0) {
			count++;
		}
		tempNum = Math.floor(tempNum / 10);
	}

	return count;
};

console.log(countDigits(7));//1
console.log(countDigits(121));//2
console.log(countDigits(1248));//4
