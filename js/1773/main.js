"use strict";

// var countMatches = function (items, ruleKey, ruleValue) {
// 	let count = 0;

// 	if (ruleKey === 'type') {
// 		items.forEach(element => {
// 			if (element[0] === ruleValue) count++;
// 		});
// 	}
// 	else if (ruleKey === 'color') {
// 		items.forEach(element => {
// 			if (element[1] === ruleValue) count++;
// 		});

// 	}
// 	else if (ruleKey === 'name') {
// 		items.forEach(element => {
// 			if (element[2] === ruleValue) count++;
// 		});
// 	}

// 	return count;
// };

//gptver
var countMatches = function (items, ruleKey, ruleValue) {
	let count = 0;

	const keyIndex = ['type', 'color', 'name'].indexOf(ruleKey);
	items.forEach(element => {
		if (element[keyIndex] === ruleValue) count++;
	});

	return count;
};

console.log(countMatches([["phone", "blue", "pixel"], ["computer", "silver", "lenovo"], ["phone", "gold", "iphone"]], "color", "silver"));//1
console.log(countMatches([["phone", "blue", "pixel"], ["computer", "silver", "phone"], ["phone", "gold", "iphone"]], "type", "phone"));//2

