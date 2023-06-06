#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

// class Solution {
//  public:
//   string toLowerCase(string s) {
//     string result = "";
//     for (auto const &i : s) {
//       result += tolower(i);
//     }
//     return result;
//   }
// };

// gptver
class Solution {
 public:
  std::string toLowerCase(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    return s;
  }
};

int main() {
  Solution s = Solution();
  cout << s.toLowerCase("Hello") << '\n';   // hello
  cout << s.toLowerCase("here") << '\n';    // here
  cout << s.toLowerCase("LOVELY") << '\n';  // lovely
}
