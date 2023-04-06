var numJewelsInStones = function (jewels, stones) {
  let res = 0;

  for (let index = 0; index < jewels.length; index++) {
    let re = new RegExp(jewels[index], "g");
    if (stones.match(re) != null) res += stones.match(re).length;
  }

  return res;
};

console.log(numJewelsInStones("aA", "aAAbbbb"));
console.log(numJewelsInStones("z", "ZZ"));
