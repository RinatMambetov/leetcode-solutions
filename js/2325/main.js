"use strict";

function convertKey(key) {
	let newKey = "";
	for (const letter of key) {
		if (letter === ' ') continue;
		if (newKey.includes(letter) === false) newKey += letter;
	}
	return newKey;
}

var decodeMessage = function (key, message) {
	key = convertKey(key);
	let alphabet = "abcdefghijklmnopqrstuvwxyz";
	let result = "";
	for (const letter of message) {
		let index = key.indexOf(letter);
		if (index === -1) result += ' ';
		else result += alphabet[index];
	}
	return result;
};

console.log(decodeMessage("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv"));//this is a secret
console.log(decodeMessage("eljuxhpwnyrdgtqkviszcfmabo", "zwx hnfx lqantp mnoeius ycgk vcnjrdb"));//the five boxing wizards jump quickly
