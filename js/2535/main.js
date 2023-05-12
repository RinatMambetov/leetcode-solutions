"use strict";

function getDigitSum(num) {
	let sum = 0;
	while (num !== 0) {
		sum += num % 10;
		num = Math.floor(num / 10);
	}
	return sum;
}

var differenceOfSum = function (nums) {
	let eSum = nums.reduce((acc, val) => acc + val, 0);
	let dSum = nums.reduce((acc, val) => acc + getDigitSum(val), 0);
	return Math.abs(eSum - dSum);
};

console.log(differenceOfSum([1, 15, 6, 3]));//9
console.log(differenceOfSum([1, 2, 3, 4]));//0
