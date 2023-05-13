"use strict";

function parser(s) {
	let result = [];
	let index = s.indexOf(':');
	result.push(s[0]);
	result.push(+s.slice(1, index));
	result.push(s[index + 1]);
	result.push(+s.slice(index + 2));
	return result;
}

var cellsInRange = function (s) {
	let parserResult = parser(s);
	let firstLetter = parserResult[0];
	let firstNum = parserResult[1];
	let secondLetter = parserResult[2];
	let secondNum = parserResult[3];
	let alphabet = 'abcdefghijklmnopqrstuvwxyz'.toUpperCase();
	let letters = alphabet.slice(alphabet.indexOf(firstLetter), alphabet.indexOf(secondLetter) + 1).split('');
	let result = [];
	letters.forEach(letter => {
		for (let num = firstNum; num < secondNum + 1; num++) {
			result.push(letter + num);
		}
	});
	return result;
};

// gptver
// const cellsInRange = (s) => {
// 	const [startRow, startCol, endRow, endCol] = s.match(/([A-Z])(\d+):([A-Z])(\d+)/).slice(1);
// 	const cols = [];
// 	for (let i = startCol; i <= endCol; i++) {
// 		cols.push(i);
// 	}
// 	const rows = [];
// 	for (let i = startRow.charCodeAt(0); i <= endRow.charCodeAt(0); i++) {
// 		rows.push(String.fromCharCode(i));
// 	}
// 	const result = [];
// 	rows.forEach((row) => {
// 		cols.forEach((col) => {
// 			result.push(row + col);
// 		});
// 	});
// 	return result;
// };

console.log(cellsInRange("K1:L2"));//["K1","K2","L1","L2"]
console.log(cellsInRange("A1:F1"));//["A1","B1","C1","D1","E1","F1"]
