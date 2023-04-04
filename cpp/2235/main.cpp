#include <cmath>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

class Solution {
 public:
  int sum(int num1, int num2) { return (num1 + num2); }
};

int main() {
  Solution s = Solution();
  cout << s.sum(1, 2) << '\n';
}
