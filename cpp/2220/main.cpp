#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

// class Solution {
//  public:
//   int minBitFlips(int start, int goal) {
//     string binStart = std::bitset<16>(start).to_string();
//     string binGoal = std::bitset<16>(goal).to_string();
//     size_t count = 0;
//     for (size_t i = 0; i < binStart.size(); i++) {
//       if (binStart[i] != binGoal[i]) count++;
//     }
//     return count;
//   }
// };

// gptver
class Solution {
 public:
  int minBitFlips(int start, int goal) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
      int bitStart = (start >> i) & 1;
      int bitGoal = (goal >> i) & 1;
      if (bitStart != bitGoal) {
        if (i + 1 < 32) start ^= (1 << (i + 1)) - 1;
        count++;
      }
    }
    return count;
  }
};

int main() {
  // vector<string> v1 = {"ad", "bd", "aaab", "baa", "badab"};
  // vector<string> v2 = {"a", "b", "c", "ab", "ac", "bc", "abc"};
  // vector<string> v3 = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
  Solution s = Solution();
  cout << s.minBitFlips(10, 7) << '\n';     // 3
  cout << s.minBitFlips(3, 4) << '\n';      // 3
  cout << s.minBitFlips(243, 640) << '\n';  // 6
}
