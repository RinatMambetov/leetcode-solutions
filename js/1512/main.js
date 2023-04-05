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

console.log(numIdenticalPairs([1, 2, 3, 1, 1, 3]));
console.log(numIdenticalPairs([1, 1, 1, 1]));
console.log(numIdenticalPairs([1, 2, 3]));
