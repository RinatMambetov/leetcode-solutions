"use strict";

/**
 * Your OrderedStream object will be instantiated and called as such:
 * var obj = new OrderedStream(n)
 * var param_1 = obj.insert(idKey,value)
 */

class OrderedStream {
	constructor(n) {
		this.pointer = 0;
		this.list = [];
	}

	insert(id, val) {
		let chunk = [];
		this.list[id - 1] = val;
		while (this.list[this.pointer]) {
			chunk.push(this.list[this.pointer]);
			this.pointer++;
		}
		return chunk;
	}
}

var obj = new OrderedStream(n);
var param_1 = obj.insert(idKey, value);
