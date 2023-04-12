var smallestEvenMultiple = function (n) {
  return n % 2 == 0 ? n : n * 2;
};

console.log(smallestEvenMultiple(5)); // 10
console.log(smallestEvenMultiple(6)); // 6
