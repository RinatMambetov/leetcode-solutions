#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

class Solution {
 public:
  int numberOfMatches(int n) {
    size_t matches = 0;
    while (n != 1) {
      int half = n / 2;
      matches += half;
      n = half + n % 2;
    }
    return matches;
  }
};

int main() {
  Solution s = Solution();
  cout << s.numberOfMatches(7) << '\n';   // 6
  cout << s.numberOfMatches(14) << '\n';  // 13
}
