#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

// template <typename T>
// void printVec(const std::vector<T> &vec) {
//   for (auto &elem : vec) {
//     std::cout << elem << " ";
//   }
//   std::cout << std::endl;
// }

// string reverseOneWord(string s) {
//   string res = "";
//   for (size_t i = s.size() - 1; i >= 0; i--) {
//     res += s[i];
//     if (i == 0) break;
//   }
//   return res;
// }

// class Solution {
//  public:
//   string reverseWords(string s) {
//     vector<string> v = {};
//     string t = "";
//     for (size_t i = 0; i < s.size(); i++) {
//       if (s[i] == ' ') {
//         v.push_back(t);
//         t = "";
//         continue;
//       }
//       t += s[i];
//     }
//     v.push_back(t);
//     string res = "";
//     for (size_t i = 0; i < v.size(); i++) {
//       res += reverseOneWord(v[i]);
//       if (i != v.size() - 1) res += ' ';
//     }
//     return res;
//   }
// };

// gptver
class Solution {
 private:
  string reverseOneWord(const string& s) {
    string res = "";
    for (int i = s.size() - 1; i >= 0; i--) {
      res += s[i];
    }
    return res;
  }

 public:
  string reverseWords(const string& s) {
    vector<string> v;
    string t = "";
    for (size_t i = 0; i < s.size(); i++) {
      if (s[i] == ' ') {
        v.emplace_back(move(t));
        t.clear();
      } else {
        t += s[i];
      }
    }
    v.emplace_back(move(t));
    string res = "";
    for (size_t i = 0; i < v.size(); i++) {
      res += reverseOneWord(v[i]);
      if (i != v.size() - 1) res += ' ';
    }
    return res;
  }
};

int main() {
  // vector<string> v1 = {"ad", "bd", "aaab", "baa", "badab"};
  // vector<string> v2 = {"a", "b", "c", "ab", "ac", "bc", "abc"};
  // vector<string> v3 = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
  Solution s = Solution();
  cout << s.reverseWords("Let's take LeetCode contest")
       << '\n';                                // s'teL ekat edoCteeL tsetnoc
  cout << s.reverseWords("God Ding") << '\n';  // doG gniD
}
