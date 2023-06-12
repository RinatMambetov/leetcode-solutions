#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

// class Solution {
//  public:
//   int maximum69Number(int num) {
//     string strNum = to_string(num);
//     for (size_t i = 0; i < strNum.size(); i++) {
//       if (strNum[i] == '6') {
//         strNum[i] = '9';
//         break;
//       }
//     }
//     return stoi(strNum);
//   }
// };

// gptver
class Solution {
 public:
  int maximum69Number(int num) {
    string num_str = to_string(num);
    for (auto& digit : num_str) {
      if (digit == '6') {
        digit = '9';
        break;
      }
    }
    return stoi(num_str);
  }
};

int main() {
  // vector<string> v1 = {"ad", "bd", "aaab", "baa", "badab"};
  // vector<string> v2 = {"a", "b", "c", "ab", "ac", "bc", "abc"};
  // vector<string> v3 = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
  Solution s = Solution();
  cout << s.maximum69Number(9669) << '\n';  // 9969
  cout << s.maximum69Number(9996) << '\n';  // 9999
  cout << s.maximum69Number(9999) << '\n';  // 9999
}
