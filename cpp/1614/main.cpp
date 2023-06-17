#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
 public:
  int maxDepth(string s) {
    size_t maxCount = 0;
    size_t count = 0;
    for (auto &ch : s) {
      if (ch == '(') {
        count++;
        if (count > maxCount) maxCount = count;
      }
      if (ch == ')') count--;
    }
    return maxCount;
  }
};

int main() {
  // vector<string> v1 = {"ad", "bd", "aaab", "baa", "badab"};
  // vector<string> v2 = {"a", "b", "c", "ab", "ac", "bc", "abc"};
  // vector<string> v3 = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
  Solution s = Solution();
  cout << s.maxDepth("(1+(2*3)+((8)/4))+1") << '\n';  // 3
  cout << s.maxDepth("(1)+((2))+(((3)))") << '\n';    // 3
}
