var maximumWealth = function (accounts) {
  let max = 0;

  accounts.forEach((element) => {
    let sum = element.reduce(function (x, y) {
      return x + y;
    }, 0);
    if (max < sum) max = sum;
  });

  return max;
};

console.log(
  maximumWealth([
    [1, 2, 3],
    [3, 2, 1],
  ])
); // 6
console.log(
  maximumWealth([
    [1, 5],
    [7, 3],
    [3, 5],
  ])
); // 10
console.log(
  maximumWealth([
    [2, 8, 7],
    [7, 1, 3],
    [1, 9, 5],
  ])
); // 17
