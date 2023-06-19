#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

// class Solution {
//  public:
//   int countAsterisks(string s) {
//     bool open = false;
//     size_t count = 0;
//     for (size_t i = 0; i < s.size(); i++) {
//       if (s[i] == '|' && open == false)
//         open = true;
//       else if (s[i] == '|' && open == true)
//         open = false;
//       if (open == false && s[i] == '*') count++;
//     }
//     return count;
//   }
// };

class Solution {
 public:
  int countAsterisks(string s) {
    int count = 0;
    bool is_inside = false;

    for (char c : s) {
      if (c == '|') is_inside = !is_inside;
      if (!is_inside && c == '*') count++;
    }
    return count;
  }
};

int main() {
  // vector<string> v1 = {"ad", "bd", "aaab", "baa", "badab"};
  // vector<string> v2 = {"a", "b", "c", "ab", "ac", "bc", "abc"};
  // vector<string> v3 = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
  Solution s = Solution();
  cout << s.countAsterisks("l|*e*et|c**o|*de|") << '\n';           // 2
  cout << s.countAsterisks("iamprogrammer") << '\n';               // 0
  cout << s.countAsterisks("yo|uar|e**|b|e***au|tifu|l") << '\n';  // 5
  cout << s.countAsterisks("*jsaxclgfcyjds") << '\n';              // 1
}
