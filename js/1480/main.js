var runningSum = function (nums) {
  let sums = [];
  let sum = 0;

  nums.forEach((element) => {
    sum += element;
    sums.push(sum);
  });

  return sums;
};

console.log(runningSum([1, 2, 3, 4])); //[1,3,6,10]
console.log(runningSum([1, 1, 1, 1, 1])); //[1,2,3,4,5]
console.log(runningSum([3, 1, 2, 10, 1])); //[3,4,6,16,17]
