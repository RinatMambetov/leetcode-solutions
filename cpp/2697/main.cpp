#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
 public:
  string makeSmallestPalindrome(string s) {
    size_t len = s.size();
    for (size_t i = 0; i <= len / 2; i++) {
      if (s[i] == s[len - i - 1]) continue;
      if (s[i] > s[len - i - 1]) {
        s[i] = s[len - i - 1];
      } else {
        s[len - i - 1] = s[i];
      }
    }
    return s;
  }
};

// gptver
//  class Solution {
//  public:
//      string makeSmallestPalindrome(string s) {
//          int len = s.size();
//          for (int i = 0; i <= len / 2; i++) {
//              if (s[i] != s[len - i - 1]) {
//                  s[i] = s[len - i - 1] = min(s[i], s[len - i - 1]);
//              }
//          }
//          return s;
//      }
//  };

int main() {
  // vector<string> v1 = {"ad", "bd", "aaab", "baa", "badab"};
  // vector<string> v2 = {"a", "b", "c", "ab", "ac", "bc", "abc"};
  // vector<string> v3 = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
  Solution s = Solution();
  cout << s.makeSmallestPalindrome("egcfe") << '\n';  // efcfe
  cout << s.makeSmallestPalindrome("abcd") << '\n';   // abba
  cout << s.makeSmallestPalindrome("seven") << '\n';  // neven
}
