class Solution {
  List<double> convertTemperature(double celsius) {
    return ([celsius + 273.15, celsius * 1.80 + 32.00]);
  }
}

void main(List<String> arguments) {
  Solution s = Solution();
  print(s.convertTemperature(36.50));
}
