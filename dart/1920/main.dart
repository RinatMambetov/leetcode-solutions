void main(List<String> arguments) {
  var nums = [5, 0, 1, 2, 3, 4];
  var ans = [for (var element in nums) nums[element]];
  print(ans);
}
