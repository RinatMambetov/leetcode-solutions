var kidsWithCandies = function (candies, extraCandies) {
  let maxOfCandies = Math.max(...candies);
  let result = [];

  for (const i of candies) {
    if (i + extraCandies >= maxOfCandies) result.push(true);
    else result.push(false);
  }

  return result;
};

console.log(kidsWithCandies([2, 3, 5, 1, 3], 3)); //[true,true,true,false,true]
console.log(kidsWithCandies([4, 2, 1, 1, 2], 1)); //[true,false,false,false,false]
console.log(kidsWithCandies([12, 1, 12], 10)); //[true,false,true]
