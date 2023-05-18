#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

class Solution {
 public:
  string truncateSentence(string s, int k) {
    size_t i(0);
    int count(0);
    for (; i < s.size(); ++i) {
      if (s[i] == ' ') ++count;
      if (count == k) break;
    }
    if (i == s.size() - 1) return s;
    return s.substr(0, i);
  }
};

int main() {
  Solution s = Solution();
  cout << s.truncateSentence("Hello how are you Contestant", 4)
       << '\n';  //"Hello how are you"
  cout << s.truncateSentence("What is the solution to this problem", 4)
       << '\n';  //"What is the solution"
  cout << s.truncateSentence("chopper is not a tanuki", 5)
       << '\n';  //"chopper is not a tanuki"
}
