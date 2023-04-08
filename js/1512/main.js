/**
 * @param {number[]} nums
 * @return {number}
 */
var numIdenticalPairs = function (nums) {
  let m = {};

  nums.forEach((element) => {
    if (m[element] == undefined) m[element] = 1;
    else m[element]++;
  });

  let res = 0;

  for (const key in m) {
    if (Object.hasOwnProperty.call(m, key)) {
      const element = m[key];
      if (element > 1) res += element * (element / 2 - 0.5);
    }
  }

  return res;
};
