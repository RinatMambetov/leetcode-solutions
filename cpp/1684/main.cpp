#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
 public:
  int countConsistentStrings(string allowed, vector<string>& words) {
    size_t counter = 0;
    size_t tempCounter = 0;
    for (auto& word : words) {
      for (size_t i = 0; i < word.size(); i++) {
        if (allowed.find(word[i]) == string::npos) continue;
        tempCounter++;
      }
      if (tempCounter == word.size()) counter++;
      tempCounter = 0;
    }
    return counter;
  }
};

int main() {
  vector<string> v1 = {"ad", "bd", "aaab", "baa", "badab"};
  vector<string> v2 = {"a", "b", "c", "ab", "ac", "bc", "abc"};
  vector<string> v3 = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};
  Solution s = Solution();
  cout << s.countConsistentStrings("ab", v1) << '\n';   // 2
  cout << s.countConsistentStrings("abc", v2) << '\n';  // 7
  cout << s.countConsistentStrings("cad", v3) << '\n';  // 4
}
